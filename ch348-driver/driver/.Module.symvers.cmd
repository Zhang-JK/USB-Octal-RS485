cmd_/home/laojk/Downloads/LINUX/driver/Module.symvers := sed 's/\.ko$$/\.o/' /home/laojk/Downloads/LINUX/driver/modules.order | scripts/mod/modpost -m -a  -o /home/laojk/Downloads/LINUX/driver/Module.symvers -e -i Module.symvers   -T -