#ifndef __BRIDGER_BPF_H
#define __BRIDGER_BPF_H

extern int bridger_bpf_prog_fd;

int bridger_bpf_init(void);
void bridger_bpf_flow_upload(struct bridger_flow *flow);
void bridger_bpf_flow_update(struct bridger_flow *flow);
void bridger_bpf_flow_delete(struct bridger_flow *flow);

#endif
