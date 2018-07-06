/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkAbstractMapper3DWrap.h"
#include "vtkAbstractMapperWrap.h"
#include "vtkAbstractPickerWrap.h"
#include "vtkAbstractVolumeMapperWrap.h"
#include "vtkActor2DCollectionWrap.h"
#include "vtkActor2DWrap.h"
#include "vtkActorCollectionWrap.h"
#include "vtkActorWrap.h"
#include "vtkAssemblyWrap.h"
#include "vtkBackgroundColorMonitorWrap.h"
#include "vtkBillboardTextActor3DWrap.h"
#include "vtkCameraActorWrap.h"
#include "vtkCameraWrap.h"
#include "vtkCameraInterpolatorWrap.h"
#include "vtkCellCenterDepthSortWrap.h"
#include "vtkColorTransferFunctionWrap.h"
#include "vtkCompositeDataDisplayAttributesWrap.h"
#include "vtkCompositeDataDisplayAttributesLegacyWrap.h"
#include "vtkCompositePolyDataMapperWrap.h"
#include "vtkCoordinateWrap.h"
#include "vtkCullerCollectionWrap.h"
#include "vtkCullerWrap.h"
#include "vtkDataSetMapperWrap.h"
#include "vtkDiscretizableColorTransferFunctionWrap.h"
#include "vtkDistanceToCameraWrap.h"
#include "vtkFollowerWrap.h"
#include "vtkFrameBufferObjectBaseWrap.h"
#include "vtkFrustumCoverageCullerWrap.h"
#include "vtkFXAAOptionsWrap.h"
#include "vtkGenericRenderWindowInteractorWrap.h"
#include "vtkGenericVertexAttributeMappingWrap.h"
#include "vtkGlyph3DMapperWrap.h"
#include "vtkGPUInfoWrap.h"
#include "vtkGPUInfoListWrap.h"
#include "vtkGraphicsFactoryWrap.h"
#include "vtkGraphMapperWrap.h"
#include "vtkGraphToGlyphsWrap.h"
#include "vtkHardwareSelectorWrap.h"
#include "vtkHierarchicalPolyDataMapperWrap.h"
#include "vtkImageActorWrap.h"
#include "vtkImageMapper3DWrap.h"
#include "vtkImageMapperWrap.h"
#include "vtkImagePropertyWrap.h"
#include "vtkImageSliceWrap.h"
#include "vtkImageSliceMapperWrap.h"
#include "vtkInteractorEventRecorderWrap.h"
#include "vtkInteractorObserverWrap.h"
#include "vtkLabeledContourMapperWrap.h"
#include "vtkLightActorWrap.h"
#include "vtkLightCollectionWrap.h"
#include "vtkLightWrap.h"
#include "vtkLightKitWrap.h"
#include "vtkLogLookupTableWrap.h"
#include "vtkLookupTableWithEnablingWrap.h"
#include "vtkMapArrayValuesWrap.h"
#include "vtkMapper2DWrap.h"
#include "vtkMapperCollectionWrap.h"
#include "vtkMapperWrap.h"
#include "vtkObserverMediatorWrap.h"
#include "vtkPolyDataMapper2DWrap.h"
#include "vtkPolyDataMapperWrap.h"
#include "vtkProp3DCollectionWrap.h"
#include "vtkProp3DWrap.h"
#include "vtkProp3DFollowerWrap.h"
#include "vtkPropAssemblyWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkPropWrap.h"
#include "vtkProperty2DWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkRendererCollectionWrap.h"
#include "vtkRendererWrap.h"
#include "vtkRendererDelegateWrap.h"
#include "vtkRendererSourceWrap.h"
#include "vtkRenderPassWrap.h"
#include "vtkRenderTimerLogWrap.h"
#include "vtkRenderWindowCollectionWrap.h"
#include "vtkRenderWindowWrap.h"
#include "vtkRenderWindowInteractorWrap.h"
#include "vtkRenderWindowInteractor3DWrap.h"
#include "vtkSelectVisiblePointsWrap.h"
#include "vtkShaderDeviceAdapter2Wrap.h"
#include "vtkSkyboxWrap.h"
#include "vtkTextActorWrap.h"
#include "vtkTextActor3DWrap.h"
#include "vtkTextureWrap.h"
#include "vtkTexturedActor2DWrap.h"
#include "vtkTransformCoordinateSystemsWrap.h"
#include "vtkTransformInterpolatorWrap.h"
#include "vtkTupleInterpolatorWrap.h"
#include "vtkViewDependentErrorMetricWrap.h"
#include "vtkViewportWrap.h"
#include "vtkVisibilitySortWrap.h"
#include "vtkVolumeCollectionWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkVolumePropertyWrap.h"
#include "vtkWindowLevelLookupTableWrap.h"
#include "vtkWindowToImageFilterWrap.h"
#include "vtkAssemblyNodeWrap.h"
#include "vtkAssemblyPathWrap.h"
#include "vtkAssemblyPathsWrap.h"
#include "vtkAreaPickerWrap.h"
#include "vtkPickerWrap.h"
#include "vtkAbstractPropPickerWrap.h"
#include "vtkPropPickerWrap.h"
#include "vtkPickingManagerWrap.h"
#include "vtkLODProp3DWrap.h"
#include "vtkWorldPointPickerWrap.h"
#include "vtkCellPickerWrap.h"
#include "vtkPointPickerWrap.h"
#include "vtkRenderedAreaPickerWrap.h"
#include "vtkScenePickerWrap.h"
#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyleSwitchBaseWrap.h"
#include "vtkInteractorStyle3DWrap.h"
#include "vtkTDxInteractorStyleWrap.h"
#include "vtkTDxInteractorStyleCameraWrap.h"
#include "vtkTDxInteractorStyleSettingsWrap.h"
#include "vtkStringToImageWrap.h"
#include "vtkTextMapperWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkTextPropertyCollectionWrap.h"
#include "vtkTextRendererWrap.h"
#include "vtkPointGaussianMapperWrap.h"

using namespace v8;

extern void vtkRenderingCoreNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkAbstractMapper3DWrap::Init( exports );
	VtkAbstractMapperWrap::Init( exports );
	VtkAbstractPickerWrap::Init( exports );
	VtkAbstractVolumeMapperWrap::Init( exports );
	VtkActor2DCollectionWrap::Init( exports );
	VtkActor2DWrap::Init( exports );
	VtkActorCollectionWrap::Init( exports );
	VtkActorWrap::Init( exports );
	VtkAssemblyWrap::Init( exports );
	VtkBackgroundColorMonitorWrap::Init( exports );
	VtkBillboardTextActor3DWrap::Init( exports );
	VtkCameraActorWrap::Init( exports );
	VtkCameraWrap::Init( exports );
	VtkCameraInterpolatorWrap::Init( exports );
	VtkCellCenterDepthSortWrap::Init( exports );
	VtkColorTransferFunctionWrap::Init( exports );
	VtkCompositeDataDisplayAttributesWrap::Init( exports );
	VtkCompositeDataDisplayAttributesLegacyWrap::Init( exports );
	VtkCompositePolyDataMapperWrap::Init( exports );
	VtkCoordinateWrap::Init( exports );
	VtkCullerCollectionWrap::Init( exports );
	VtkCullerWrap::Init( exports );
	VtkDataSetMapperWrap::Init( exports );
	VtkDiscretizableColorTransferFunctionWrap::Init( exports );
	VtkDistanceToCameraWrap::Init( exports );
	VtkFollowerWrap::Init( exports );
	VtkFrameBufferObjectBaseWrap::Init( exports );
	VtkFrustumCoverageCullerWrap::Init( exports );
	VtkFXAAOptionsWrap::Init( exports );
	VtkGenericRenderWindowInteractorWrap::Init( exports );
	VtkGenericVertexAttributeMappingWrap::Init( exports );
	VtkGlyph3DMapperWrap::Init( exports );
	VtkGPUInfoWrap::Init( exports );
	VtkGPUInfoListWrap::Init( exports );
	VtkGraphicsFactoryWrap::Init( exports );
	VtkGraphMapperWrap::Init( exports );
	VtkGraphToGlyphsWrap::Init( exports );
	VtkHardwareSelectorWrap::Init( exports );
	VtkHierarchicalPolyDataMapperWrap::Init( exports );
	VtkImageActorWrap::Init( exports );
	VtkImageMapper3DWrap::Init( exports );
	VtkImageMapperWrap::Init( exports );
	VtkImagePropertyWrap::Init( exports );
	VtkImageSliceWrap::Init( exports );
	VtkImageSliceMapperWrap::Init( exports );
	VtkInteractorEventRecorderWrap::Init( exports );
	VtkInteractorObserverWrap::Init( exports );
	VtkLabeledContourMapperWrap::Init( exports );
	VtkLightActorWrap::Init( exports );
	VtkLightCollectionWrap::Init( exports );
	VtkLightWrap::Init( exports );
	VtkLightKitWrap::Init( exports );
	VtkLogLookupTableWrap::Init( exports );
	VtkLookupTableWithEnablingWrap::Init( exports );
	VtkMapArrayValuesWrap::Init( exports );
	VtkMapper2DWrap::Init( exports );
	VtkMapperCollectionWrap::Init( exports );
	VtkMapperWrap::Init( exports );
	VtkObserverMediatorWrap::Init( exports );
	VtkPolyDataMapper2DWrap::Init( exports );
	VtkPolyDataMapperWrap::Init( exports );
	VtkProp3DCollectionWrap::Init( exports );
	VtkProp3DWrap::Init( exports );
	VtkProp3DFollowerWrap::Init( exports );
	VtkPropAssemblyWrap::Init( exports );
	VtkPropCollectionWrap::Init( exports );
	VtkPropWrap::Init( exports );
	VtkProperty2DWrap::Init( exports );
	VtkPropertyWrap::Init( exports );
	VtkRendererCollectionWrap::Init( exports );
	VtkRendererWrap::Init( exports );
	VtkRendererDelegateWrap::Init( exports );
	VtkRendererSourceWrap::Init( exports );
	VtkRenderPassWrap::Init( exports );
	VtkRenderTimerLogWrap::Init( exports );
	VtkRenderWindowCollectionWrap::Init( exports );
	VtkRenderWindowWrap::Init( exports );
	VtkRenderWindowInteractorWrap::Init( exports );
	VtkRenderWindowInteractor3DWrap::Init( exports );
	VtkSelectVisiblePointsWrap::Init( exports );
	VtkShaderDeviceAdapter2Wrap::Init( exports );
	VtkSkyboxWrap::Init( exports );
	VtkTextActorWrap::Init( exports );
	VtkTextActor3DWrap::Init( exports );
	VtkTextureWrap::Init( exports );
	VtkTexturedActor2DWrap::Init( exports );
	VtkTransformCoordinateSystemsWrap::Init( exports );
	VtkTransformInterpolatorWrap::Init( exports );
	VtkTupleInterpolatorWrap::Init( exports );
	VtkViewDependentErrorMetricWrap::Init( exports );
	VtkViewportWrap::Init( exports );
	VtkVisibilitySortWrap::Init( exports );
	VtkVolumeCollectionWrap::Init( exports );
	VtkVolumeWrap::Init( exports );
	VtkVolumePropertyWrap::Init( exports );
	VtkWindowLevelLookupTableWrap::Init( exports );
	VtkWindowToImageFilterWrap::Init( exports );
	VtkAssemblyNodeWrap::Init( exports );
	VtkAssemblyPathWrap::Init( exports );
	VtkAssemblyPathsWrap::Init( exports );
	VtkAreaPickerWrap::Init( exports );
	VtkPickerWrap::Init( exports );
	VtkAbstractPropPickerWrap::Init( exports );
	VtkPropPickerWrap::Init( exports );
	VtkPickingManagerWrap::Init( exports );
	VtkLODProp3DWrap::Init( exports );
	VtkWorldPointPickerWrap::Init( exports );
	VtkCellPickerWrap::Init( exports );
	VtkPointPickerWrap::Init( exports );
	VtkRenderedAreaPickerWrap::Init( exports );
	VtkScenePickerWrap::Init( exports );
	VtkInteractorStyleWrap::Init( exports );
	VtkInteractorStyleSwitchBaseWrap::Init( exports );
	VtkInteractorStyle3DWrap::Init( exports );
	VtkTDxInteractorStyleWrap::Init( exports );
	VtkTDxInteractorStyleCameraWrap::Init( exports );
	VtkTDxInteractorStyleSettingsWrap::Init( exports );
	VtkStringToImageWrap::Init( exports );
	VtkTextMapperWrap::Init( exports );
	VtkTextPropertyWrap::Init( exports );
	VtkTextPropertyCollectionWrap::Init( exports );
	VtkTextRendererWrap::Init( exports );
	VtkPointGaussianMapperWrap::Init( exports );
}
