# %matplotlib inline
from nuscenes import NuScenes
nusc = NuScenes(version='/home/chenyang/study/self_driving/benchmark/v1.0-trainval_meta/v1.0-trainval', dataroot='/home/chenyang/study/self_driving/benchmark/v1.0-trainval_meta', verbose=True)
nusc.list_scenes()