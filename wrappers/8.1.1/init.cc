#include <nan.h>

using namespace v8;
using v8::Local;
using v8::Object;

// special object to request nowrap creations
// not available to javascript.
Nan::Persistent<v8::Object> vtkNodeJsNoWrap;

extern void vtkCommonCoreNodeJsInit(v8::Local<v8::Object>);
extern void vtkCommonMathNodeJsInit(v8::Local<v8::Object>);
extern void vtkCommonMiscNodeJsInit(v8::Local<v8::Object>);
extern void vtkCommonSystemNodeJsInit(v8::Local<v8::Object>);
extern void vtkCommonTransformsNodeJsInit(v8::Local<v8::Object>);
extern void vtkCommonDataModelNodeJsInit(v8::Local<v8::Object>);
extern void vtkCommonColorNodeJsInit(v8::Local<v8::Object>);
extern void vtkCommonExecutionModelNodeJsInit(v8::Local<v8::Object>);
extern void vtkCommonComputationalGeometryNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersCoreNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersGeneralNodeJsInit(v8::Local<v8::Object>);
extern void vtkImagingCoreNodeJsInit(v8::Local<v8::Object>);
extern void vtkImagingFourierNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersStatisticsNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersExtractionNodeJsInit(v8::Local<v8::Object>);
extern void vtkInfovisCoreNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersGeometryNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersSourcesNodeJsInit(v8::Local<v8::Object>);
extern void vtkRenderingCoreNodeJsInit(v8::Local<v8::Object>);
extern void vtkRenderingFreeTypeNodeJsInit(v8::Local<v8::Object>);
extern void vtkRenderingContext2DNodeJsInit(v8::Local<v8::Object>);
extern void vtkChartsCoreNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOCoreNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOLegacyNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOXMLParserNodeJsInit(v8::Local<v8::Object>);
extern void vtkDomainsChemistryNodeJsInit(v8::Local<v8::Object>);
extern void vtkRenderingOpenGL2NodeJsInit(v8::Local<v8::Object>);
extern void vtkDomainsChemistryOpenGL2NodeJsInit(v8::Local<v8::Object>);
extern void vtkIOXMLNodeJsInit(v8::Local<v8::Object>);
extern void vtkParallelCoreNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersAMRNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersFlowPathsNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersGenericNodeJsInit(v8::Local<v8::Object>);
extern void vtkImagingSourcesNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersHybridNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersHyperTreeNodeJsInit(v8::Local<v8::Object>);
extern void vtkImagingGeneralNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersImagingNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersModelingNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersParallelNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersParallelImagingNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersPointsNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersProgrammableNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersSMPNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersSelectionNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersTextureNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersTopologyNodeJsInit(v8::Local<v8::Object>);
extern void vtkFiltersVerdictNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOImageNodeJsInit(v8::Local<v8::Object>);
extern void vtkImagingHybridNodeJsInit(v8::Local<v8::Object>);
extern void vtkInfovisLayoutNodeJsInit(v8::Local<v8::Object>);
extern void vtkInteractionStyleNodeJsInit(v8::Local<v8::Object>);
extern void vtkImagingColorNodeJsInit(v8::Local<v8::Object>);
extern void vtkRenderingAnnotationNodeJsInit(v8::Local<v8::Object>);
extern void vtkRenderingVolumeNodeJsInit(v8::Local<v8::Object>);
extern void vtkInteractionWidgetsNodeJsInit(v8::Local<v8::Object>);
extern void vtkViewsCoreNodeJsInit(v8::Local<v8::Object>);
extern void vtkGeovisCoreNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOAMRNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOEnSightNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOExodusNodeJsInit(v8::Local<v8::Object>);
extern void vtkRenderingGL2PSOpenGL2NodeJsInit(v8::Local<v8::Object>);
extern void vtkIOExportNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOExportOpenGL2NodeJsInit(v8::Local<v8::Object>);
extern void vtkIOGeometryNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOImportNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOInfovisNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOLSDynaNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOMINCNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOMovieNodeJsInit(v8::Local<v8::Object>);
extern void vtkIONetCDFNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOPLYNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOParallelNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOParallelXMLNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOSQLNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOTecplotTableNodeJsInit(v8::Local<v8::Object>);
extern void vtkIOVideoNodeJsInit(v8::Local<v8::Object>);
extern void vtkImagingMathNodeJsInit(v8::Local<v8::Object>);
extern void vtkImagingMorphologicalNodeJsInit(v8::Local<v8::Object>);
extern void vtkImagingStatisticsNodeJsInit(v8::Local<v8::Object>);
extern void vtkImagingStencilNodeJsInit(v8::Local<v8::Object>);
extern void vtkInteractionImageNodeJsInit(v8::Local<v8::Object>);
extern void vtkRenderingContextOpenGL2NodeJsInit(v8::Local<v8::Object>);
extern void vtkRenderingImageNodeJsInit(v8::Local<v8::Object>);
extern void vtkRenderingLODNodeJsInit(v8::Local<v8::Object>);
extern void vtkRenderingLabelNodeJsInit(v8::Local<v8::Object>);
extern void vtkRenderingVolumeOpenGL2NodeJsInit(v8::Local<v8::Object>);
extern void vtkViewsContext2DNodeJsInit(v8::Local<v8::Object>);
extern void vtkViewsInfovisNodeJsInit(v8::Local<v8::Object>);
extern void vtkNodeJsPlusInit(v8::Local<v8::Object>);

void init( Local<Object> exports )
{
	vtkNodeJsNoWrap.Reset( Nan::New<v8::Object>() );

	
	vtkCommonCoreNodeJsInit(exports);
	vtkCommonMathNodeJsInit(exports);
	vtkCommonMiscNodeJsInit(exports);
	vtkCommonSystemNodeJsInit(exports);
	vtkCommonTransformsNodeJsInit(exports);
	vtkCommonDataModelNodeJsInit(exports);
	vtkCommonColorNodeJsInit(exports);
	vtkCommonExecutionModelNodeJsInit(exports);
	vtkCommonComputationalGeometryNodeJsInit(exports);
	vtkFiltersCoreNodeJsInit(exports);
	vtkFiltersGeneralNodeJsInit(exports);
	vtkImagingCoreNodeJsInit(exports);
	vtkImagingFourierNodeJsInit(exports);
	vtkFiltersStatisticsNodeJsInit(exports);
	vtkFiltersExtractionNodeJsInit(exports);
	vtkInfovisCoreNodeJsInit(exports);
	vtkFiltersGeometryNodeJsInit(exports);
	vtkFiltersSourcesNodeJsInit(exports);
	vtkRenderingCoreNodeJsInit(exports);
	vtkRenderingFreeTypeNodeJsInit(exports);
	vtkRenderingContext2DNodeJsInit(exports);
	vtkChartsCoreNodeJsInit(exports);
	vtkIOCoreNodeJsInit(exports);
	vtkIOLegacyNodeJsInit(exports);
	vtkIOXMLParserNodeJsInit(exports);
	vtkDomainsChemistryNodeJsInit(exports);
	vtkRenderingOpenGL2NodeJsInit(exports);
	vtkDomainsChemistryOpenGL2NodeJsInit(exports);
	vtkIOXMLNodeJsInit(exports);
	vtkParallelCoreNodeJsInit(exports);
	vtkFiltersAMRNodeJsInit(exports);
	vtkFiltersFlowPathsNodeJsInit(exports);
	vtkFiltersGenericNodeJsInit(exports);
	vtkImagingSourcesNodeJsInit(exports);
	vtkFiltersHybridNodeJsInit(exports);
	vtkFiltersHyperTreeNodeJsInit(exports);
	vtkImagingGeneralNodeJsInit(exports);
	vtkFiltersImagingNodeJsInit(exports);
	vtkFiltersModelingNodeJsInit(exports);
	vtkFiltersParallelNodeJsInit(exports);
	vtkFiltersParallelImagingNodeJsInit(exports);
	vtkFiltersPointsNodeJsInit(exports);
	vtkFiltersProgrammableNodeJsInit(exports);
	vtkFiltersSMPNodeJsInit(exports);
	vtkFiltersSelectionNodeJsInit(exports);
	vtkFiltersTextureNodeJsInit(exports);
	vtkFiltersTopologyNodeJsInit(exports);
	vtkFiltersVerdictNodeJsInit(exports);
	vtkIOImageNodeJsInit(exports);
	vtkImagingHybridNodeJsInit(exports);
	vtkInfovisLayoutNodeJsInit(exports);
	vtkInteractionStyleNodeJsInit(exports);
	vtkImagingColorNodeJsInit(exports);
	vtkRenderingAnnotationNodeJsInit(exports);
	vtkRenderingVolumeNodeJsInit(exports);
	vtkInteractionWidgetsNodeJsInit(exports);
	vtkViewsCoreNodeJsInit(exports);
	vtkGeovisCoreNodeJsInit(exports);
	vtkIOAMRNodeJsInit(exports);
	vtkIOEnSightNodeJsInit(exports);
	vtkIOExodusNodeJsInit(exports);
	vtkRenderingGL2PSOpenGL2NodeJsInit(exports);
	vtkIOExportNodeJsInit(exports);
	vtkIOExportOpenGL2NodeJsInit(exports);
	vtkIOGeometryNodeJsInit(exports);
	vtkIOImportNodeJsInit(exports);
	vtkIOInfovisNodeJsInit(exports);
	vtkIOLSDynaNodeJsInit(exports);
	vtkIOMINCNodeJsInit(exports);
	vtkIOMovieNodeJsInit(exports);
	vtkIONetCDFNodeJsInit(exports);
	vtkIOPLYNodeJsInit(exports);
	vtkIOParallelNodeJsInit(exports);
	vtkIOParallelXMLNodeJsInit(exports);
	vtkIOSQLNodeJsInit(exports);
	vtkIOTecplotTableNodeJsInit(exports);
	vtkIOVideoNodeJsInit(exports);
	vtkImagingMathNodeJsInit(exports);
	vtkImagingMorphologicalNodeJsInit(exports);
	vtkImagingStatisticsNodeJsInit(exports);
	vtkImagingStencilNodeJsInit(exports);
	vtkInteractionImageNodeJsInit(exports);
	vtkRenderingContextOpenGL2NodeJsInit(exports);
	vtkRenderingImageNodeJsInit(exports);
	vtkRenderingLODNodeJsInit(exports);
	vtkRenderingLabelNodeJsInit(exports);
	vtkRenderingVolumeOpenGL2NodeJsInit(exports);
	vtkViewsContext2DNodeJsInit(exports);
	vtkViewsInfovisNodeJsInit(exports);
	vtkNodeJsPlusInit(exports);
}

NODE_MODULE( addon, init )

