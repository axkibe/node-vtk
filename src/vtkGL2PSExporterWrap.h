/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGL2PSEXPORTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGL2PSEXPORTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGL2PSExporter.h>

#include "vtkExporterWrap.h"

class VtkGL2PSExporterWrap : public VtkExporterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkGL2PSExporterWrap(vtkSmartPointer<vtkGL2PSExporter>);
		VtkGL2PSExporterWrap();
		~VtkGL2PSExporterWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BestRootOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BestRootOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CompressOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CompressOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawBackgroundOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawBackgroundOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBestRoot(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileFormatAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileFormatMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileFormatMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLandscape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOcclusionCull(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPS3Shading(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRasterExclusions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSilent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSimpleLineOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWrite3DPropsAsRasterImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LandscapeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LandscapeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OcclusionCullOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OcclusionCullOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PS3ShadingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PS3ShadingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBestRoot(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileFormatToEPS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileFormatToPDF(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileFormatToPS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileFormatToSVG(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileFormatToTeX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLandscape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOcclusionCull(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPS3Shading(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRasterExclusions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSilent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSimpleLineOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortToBSP(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortToOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortToSimple(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWrite3DPropsAsRasterImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SilentOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SilentOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SimpleLineOffsetOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SimpleLineOffsetOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TextAsPathOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TextAsPathOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TextOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TextOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UsePainterSettings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Write3DPropsAsRasterImageOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Write3DPropsAsRasterImageOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
