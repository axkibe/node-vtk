/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOPENGLEXTENSIONMANAGERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOPENGLEXTENSIONMANAGERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOpenGLExtensionManager.h>

#include "vtkObjectWrap.h"

class VtkOpenGLExtensionManagerWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOpenGLExtensionManagerWrap(vtkSmartPointer<vtkOpenGLExtensionManager>);
		VtkOpenGLExtensionManagerWrap();
		~VtkOpenGLExtensionManagerWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ExtensionSupported(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDriverGLRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDriverGLVendor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDriverGLVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDriverGLVersionMajor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDriverGLVersionMinor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDriverGLVersionPatch(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDriverVersionMajor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDriverVersionMinor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDriverVersionPatch(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtensionsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IgnoreDriverBugsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IgnoreDriverBugsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LoadAsARBExtension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LoadCorePromotedExtension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LoadExtension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LoadSupportedExtension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
