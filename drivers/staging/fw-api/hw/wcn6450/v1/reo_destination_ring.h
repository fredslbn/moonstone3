
/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */



#ifndef _REO_DESTINATION_RING_H_
#define _REO_DESTINATION_RING_H_
#if !defined(__ASSEMBLER__)
#endif

#include "buffer_addr_info.h"
#include "rx_mpdu_desc_info.h"
#include "rx_msdu_desc_info.h"

#define NUM_OF_DWORDS_REO_DESTINATION_RING 16

struct reo_destination_ring {
    struct            buffer_addr_info                       buf_or_link_desc_addr_info;
    struct            rx_mpdu_desc_info                       rx_mpdu_desc_info_details;
    struct            rx_msdu_desc_info                       rx_msdu_desc_info_details;
             uint32_t rx_reo_queue_desc_addr_31_0     : 32;
             uint32_t rx_reo_queue_desc_addr_39_32    :  8,
                      reo_dest_buffer_type            :  1,
                      reo_push_reason                 :  2,
                      reo_error_code                  :  5,
                      receive_queue_number            : 16;
             uint32_t soft_reorder_info_valid         :  1,
                      reorder_opcode                  :  4,
                      reorder_slot_index              :  8,
                      mpdu_fragment_number            :  4,
                      captured_msdu_data_size         :  4,
                      sw_exception                    :  1,
                      reserved_8a                     : 10;
             uint32_t reo_destination_struct_signature: 32;
             uint32_t reserved_10a                    : 32;
             uint32_t reserved_11a                    : 32;
             uint32_t reserved_12a                    : 32;
             uint32_t reserved_13a                    : 32;
             uint32_t reserved_14a                    : 32;
             uint32_t reserved_15                     : 20,
                      ring_id                         :  8,
                      looping_count                   :  4;
};

#define REO_DESTINATION_RING_0_BUF_OR_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000000
#define REO_DESTINATION_RING_0_BUF_OR_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define REO_DESTINATION_RING_0_BUF_OR_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

#define REO_DESTINATION_RING_1_BUF_OR_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000004
#define REO_DESTINATION_RING_1_BUF_OR_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define REO_DESTINATION_RING_1_BUF_OR_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

#define REO_DESTINATION_RING_1_BUF_OR_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000004
#define REO_DESTINATION_RING_1_BUF_OR_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define REO_DESTINATION_RING_1_BUF_OR_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

#define REO_DESTINATION_RING_1_BUF_OR_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000004
#define REO_DESTINATION_RING_1_BUF_OR_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define REO_DESTINATION_RING_1_BUF_OR_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MSDU_COUNT_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MSDU_COUNT_LSB 0
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MSDU_COUNT_MASK 0x000000ff

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MPDU_SEQUENCE_NUMBER_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MPDU_SEQUENCE_NUMBER_LSB 8
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MPDU_SEQUENCE_NUMBER_MASK 0x000fff00

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_FRAGMENT_FLAG_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_FRAGMENT_FLAG_LSB 20
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_FRAGMENT_FLAG_MASK 0x00100000

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MPDU_RETRY_BIT_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MPDU_RETRY_BIT_LSB 21
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MPDU_RETRY_BIT_MASK 0x00200000

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_AMPDU_FLAG_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_AMPDU_FLAG_LSB 22
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_AMPDU_FLAG_MASK 0x00400000

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_BAR_FRAME_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_BAR_FRAME_LSB 23
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_BAR_FRAME_MASK 0x00800000

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_PN_FIELDS_CONTAIN_VALID_INFO_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_PN_FIELDS_CONTAIN_VALID_INFO_LSB 24
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_PN_FIELDS_CONTAIN_VALID_INFO_MASK 0x01000000

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_SA_IS_VALID_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_SA_IS_VALID_LSB 25
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_SA_IS_VALID_MASK 0x02000000

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT_LSB 26
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT_MASK 0x04000000

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_DA_IS_VALID_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_DA_IS_VALID_LSB 27
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_DA_IS_VALID_MASK 0x08000000

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_DA_IS_MCBC_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_DA_IS_MCBC_LSB 28
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_DA_IS_MCBC_MASK 0x10000000

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT_LSB 29
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT_MASK 0x20000000

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_RAW_MPDU_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_RAW_MPDU_LSB 30
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_RAW_MPDU_MASK 0x40000000

#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MORE_FRAGMENT_FLAG_OFFSET 0x00000008
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MORE_FRAGMENT_FLAG_LSB 31
#define REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MORE_FRAGMENT_FLAG_MASK 0x80000000

#define REO_DESTINATION_RING_3_RX_MPDU_DESC_INFO_DETAILS_PEER_META_DATA_OFFSET 0x0000000c
#define REO_DESTINATION_RING_3_RX_MPDU_DESC_INFO_DETAILS_PEER_META_DATA_LSB 0
#define REO_DESTINATION_RING_3_RX_MPDU_DESC_INFO_DETAILS_PEER_META_DATA_MASK 0xffffffff

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_FIRST_MSDU_IN_MPDU_FLAG_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_FIRST_MSDU_IN_MPDU_FLAG_LSB 0
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_FIRST_MSDU_IN_MPDU_FLAG_MASK 0x00000001

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_LAST_MSDU_IN_MPDU_FLAG_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_LAST_MSDU_IN_MPDU_FLAG_LSB 1
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_LAST_MSDU_IN_MPDU_FLAG_MASK 0x00000002

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_MSDU_CONTINUATION_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_MSDU_CONTINUATION_LSB 2
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_MSDU_CONTINUATION_MASK 0x00000004

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_MSDU_LENGTH_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_MSDU_LENGTH_LSB 3
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_MSDU_LENGTH_MASK 0x0001fff8

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_REO_DESTINATION_INDICATION_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_REO_DESTINATION_INDICATION_LSB 17
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_REO_DESTINATION_INDICATION_MASK 0x003e0000

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_MSDU_DROP_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_MSDU_DROP_LSB 22
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_MSDU_DROP_MASK 0x00400000

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_SA_IS_VALID_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_SA_IS_VALID_LSB 23
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_SA_IS_VALID_MASK 0x00800000

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT_LSB 24
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT_MASK 0x01000000

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_DA_IS_VALID_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_DA_IS_VALID_LSB 25
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_DA_IS_VALID_MASK 0x02000000

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_DA_IS_MCBC_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_DA_IS_MCBC_LSB 26
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_DA_IS_MCBC_MASK 0x04000000

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT_LSB 27
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT_MASK 0x08000000

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_L3_HEADER_PADDING_MSB_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_L3_HEADER_PADDING_MSB_LSB 28
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_L3_HEADER_PADDING_MSB_MASK 0x10000000

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_TCP_UDP_CHKSUM_FAIL_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_TCP_UDP_CHKSUM_FAIL_LSB 29
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_TCP_UDP_CHKSUM_FAIL_MASK 0x20000000

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_IP_CHKSUM_FAIL_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_IP_CHKSUM_FAIL_LSB 30
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_IP_CHKSUM_FAIL_MASK 0x40000000

#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_RAW_MPDU_OFFSET 0x00000010
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_RAW_MPDU_LSB 31
#define REO_DESTINATION_RING_4_RX_MSDU_DESC_INFO_DETAILS_RAW_MPDU_MASK 0x80000000

#define REO_DESTINATION_RING_5_RX_MSDU_DESC_INFO_DETAILS_SA_IDX_OR_SW_PEER_ID_14_0_OFFSET 0x00000014
#define REO_DESTINATION_RING_5_RX_MSDU_DESC_INFO_DETAILS_SA_IDX_OR_SW_PEER_ID_14_0_LSB 0
#define REO_DESTINATION_RING_5_RX_MSDU_DESC_INFO_DETAILS_SA_IDX_OR_SW_PEER_ID_14_0_MASK 0x00007fff

#define REO_DESTINATION_RING_5_RX_MSDU_DESC_INFO_DETAILS_MPDU_AST_IDX_OR_SW_PEER_ID_14_0_OFFSET 0x00000014
#define REO_DESTINATION_RING_5_RX_MSDU_DESC_INFO_DETAILS_MPDU_AST_IDX_OR_SW_PEER_ID_14_0_LSB 15
#define REO_DESTINATION_RING_5_RX_MSDU_DESC_INFO_DETAILS_MPDU_AST_IDX_OR_SW_PEER_ID_14_0_MASK 0x3fff8000

#define REO_DESTINATION_RING_5_RX_MSDU_DESC_INFO_DETAILS_FR_DS_OFFSET 0x00000014
#define REO_DESTINATION_RING_5_RX_MSDU_DESC_INFO_DETAILS_FR_DS_LSB   30
#define REO_DESTINATION_RING_5_RX_MSDU_DESC_INFO_DETAILS_FR_DS_MASK  0x40000000

#define REO_DESTINATION_RING_5_RX_MSDU_DESC_INFO_DETAILS_TO_DS_OFFSET 0x00000014
#define REO_DESTINATION_RING_5_RX_MSDU_DESC_INFO_DETAILS_TO_DS_LSB   31
#define REO_DESTINATION_RING_5_RX_MSDU_DESC_INFO_DETAILS_TO_DS_MASK  0x80000000

#define REO_DESTINATION_RING_6_RX_REO_QUEUE_DESC_ADDR_31_0_OFFSET    0x00000018
#define REO_DESTINATION_RING_6_RX_REO_QUEUE_DESC_ADDR_31_0_LSB       0
#define REO_DESTINATION_RING_6_RX_REO_QUEUE_DESC_ADDR_31_0_MASK      0xffffffff

#define REO_DESTINATION_RING_7_RX_REO_QUEUE_DESC_ADDR_39_32_OFFSET   0x0000001c
#define REO_DESTINATION_RING_7_RX_REO_QUEUE_DESC_ADDR_39_32_LSB      0
#define REO_DESTINATION_RING_7_RX_REO_QUEUE_DESC_ADDR_39_32_MASK     0x000000ff

#define REO_DESTINATION_RING_7_REO_DEST_BUFFER_TYPE_OFFSET           0x0000001c
#define REO_DESTINATION_RING_7_REO_DEST_BUFFER_TYPE_LSB              8
#define REO_DESTINATION_RING_7_REO_DEST_BUFFER_TYPE_MASK             0x00000100

#define REO_DESTINATION_RING_7_REO_PUSH_REASON_OFFSET                0x0000001c
#define REO_DESTINATION_RING_7_REO_PUSH_REASON_LSB                   9
#define REO_DESTINATION_RING_7_REO_PUSH_REASON_MASK                  0x00000600

#define REO_DESTINATION_RING_7_REO_ERROR_CODE_OFFSET                 0x0000001c
#define REO_DESTINATION_RING_7_REO_ERROR_CODE_LSB                    11
#define REO_DESTINATION_RING_7_REO_ERROR_CODE_MASK                   0x0000f800

#define REO_DESTINATION_RING_7_RECEIVE_QUEUE_NUMBER_OFFSET           0x0000001c
#define REO_DESTINATION_RING_7_RECEIVE_QUEUE_NUMBER_LSB              16
#define REO_DESTINATION_RING_7_RECEIVE_QUEUE_NUMBER_MASK             0xffff0000

#define REO_DESTINATION_RING_8_SOFT_REORDER_INFO_VALID_OFFSET        0x00000020
#define REO_DESTINATION_RING_8_SOFT_REORDER_INFO_VALID_LSB           0
#define REO_DESTINATION_RING_8_SOFT_REORDER_INFO_VALID_MASK          0x00000001

#define REO_DESTINATION_RING_8_REORDER_OPCODE_OFFSET                 0x00000020
#define REO_DESTINATION_RING_8_REORDER_OPCODE_LSB                    1
#define REO_DESTINATION_RING_8_REORDER_OPCODE_MASK                   0x0000001e

#define REO_DESTINATION_RING_8_REORDER_SLOT_INDEX_OFFSET             0x00000020
#define REO_DESTINATION_RING_8_REORDER_SLOT_INDEX_LSB                5
#define REO_DESTINATION_RING_8_REORDER_SLOT_INDEX_MASK               0x00001fe0

#define REO_DESTINATION_RING_8_MPDU_FRAGMENT_NUMBER_OFFSET           0x00000020
#define REO_DESTINATION_RING_8_MPDU_FRAGMENT_NUMBER_LSB              13
#define REO_DESTINATION_RING_8_MPDU_FRAGMENT_NUMBER_MASK             0x0001e000

#define REO_DESTINATION_RING_8_CAPTURED_MSDU_DATA_SIZE_OFFSET        0x00000020
#define REO_DESTINATION_RING_8_CAPTURED_MSDU_DATA_SIZE_LSB           17
#define REO_DESTINATION_RING_8_CAPTURED_MSDU_DATA_SIZE_MASK          0x001e0000

#define REO_DESTINATION_RING_8_SW_EXCEPTION_OFFSET                   0x00000020
#define REO_DESTINATION_RING_8_SW_EXCEPTION_LSB                      21
#define REO_DESTINATION_RING_8_SW_EXCEPTION_MASK                     0x00200000

#define REO_DESTINATION_RING_8_RESERVED_8A_OFFSET                    0x00000020
#define REO_DESTINATION_RING_8_RESERVED_8A_LSB                       22
#define REO_DESTINATION_RING_8_RESERVED_8A_MASK                      0xffc00000

#define REO_DESTINATION_RING_9_REO_DESTINATION_STRUCT_SIGNATURE_OFFSET 0x00000024
#define REO_DESTINATION_RING_9_REO_DESTINATION_STRUCT_SIGNATURE_LSB  0
#define REO_DESTINATION_RING_9_REO_DESTINATION_STRUCT_SIGNATURE_MASK 0xffffffff

#define REO_DESTINATION_RING_10_RESERVED_10A_OFFSET                  0x00000028
#define REO_DESTINATION_RING_10_RESERVED_10A_LSB                     0
#define REO_DESTINATION_RING_10_RESERVED_10A_MASK                    0xffffffff

#define REO_DESTINATION_RING_11_RESERVED_11A_OFFSET                  0x0000002c
#define REO_DESTINATION_RING_11_RESERVED_11A_LSB                     0
#define REO_DESTINATION_RING_11_RESERVED_11A_MASK                    0xffffffff

#define REO_DESTINATION_RING_12_RESERVED_12A_OFFSET                  0x00000030
#define REO_DESTINATION_RING_12_RESERVED_12A_LSB                     0
#define REO_DESTINATION_RING_12_RESERVED_12A_MASK                    0xffffffff

#define REO_DESTINATION_RING_13_RESERVED_13A_OFFSET                  0x00000034
#define REO_DESTINATION_RING_13_RESERVED_13A_LSB                     0
#define REO_DESTINATION_RING_13_RESERVED_13A_MASK                    0xffffffff

#define REO_DESTINATION_RING_14_RESERVED_14A_OFFSET                  0x00000038
#define REO_DESTINATION_RING_14_RESERVED_14A_LSB                     0
#define REO_DESTINATION_RING_14_RESERVED_14A_MASK                    0xffffffff

#define REO_DESTINATION_RING_15_RESERVED_15_OFFSET                   0x0000003c
#define REO_DESTINATION_RING_15_RESERVED_15_LSB                      0
#define REO_DESTINATION_RING_15_RESERVED_15_MASK                     0x000fffff

#define REO_DESTINATION_RING_15_RING_ID_OFFSET                       0x0000003c
#define REO_DESTINATION_RING_15_RING_ID_LSB                          20
#define REO_DESTINATION_RING_15_RING_ID_MASK                         0x0ff00000

#define REO_DESTINATION_RING_15_LOOPING_COUNT_OFFSET                 0x0000003c
#define REO_DESTINATION_RING_15_LOOPING_COUNT_LSB                    28
#define REO_DESTINATION_RING_15_LOOPING_COUNT_MASK                   0xf0000000

#endif