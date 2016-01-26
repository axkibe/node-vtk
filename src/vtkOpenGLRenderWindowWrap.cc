/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRenderWindowWrap.h"
#include "vtkOpenGLRenderWindowWrap.h"
#include "vtkObjectWrap.h"
#include "vtkUnsignedCharArrayWrap.h"
#include "vtkFloatArrayWrap.h"
#include "vtkOpenGLExtensionManagerWrap.h"
#include "vtkOpenGLHardwareSupportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOpenGLRenderWindowWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLRenderWindowWrap::ptpl;

VtkOpenGLRenderWindowWrap::VtkOpenGLRenderWindowWrap()
{ }

VtkOpenGLRenderWindowWrap::VtkOpenGLRenderWindowWrap(vtkSmartPointer<vtkOpenGLRenderWindow> _native)
{ native = _native; }

VtkOpenGLRenderWindowWrap::~VtkOpenGLRenderWindowWrap()
{ }

void VtkOpenGLRenderWindowWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLRenderWindow").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLRenderWindow").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLRenderWindowWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLRenderWindowWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderWindowWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderWindowWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLRenderWindowWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CheckGraphicError", CheckGraphicError);
	Nan::SetPrototypeMethod(tpl, "checkGraphicError", CheckGraphicError);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDepthBufferSize", GetDepthBufferSize);
	Nan::SetPrototypeMethod(tpl, "getDepthBufferSize", GetDepthBufferSize);

	Nan::SetPrototypeMethod(tpl, "GetExtensionManager", GetExtensionManager);
	Nan::SetPrototypeMethod(tpl, "getExtensionManager", GetExtensionManager);

	Nan::SetPrototypeMethod(tpl, "GetGlobalMaximumNumberOfMultiSamples", GetGlobalMaximumNumberOfMultiSamples);
	Nan::SetPrototypeMethod(tpl, "getGlobalMaximumNumberOfMultiSamples", GetGlobalMaximumNumberOfMultiSamples);

	Nan::SetPrototypeMethod(tpl, "GetHardwareSupport", GetHardwareSupport);
	Nan::SetPrototypeMethod(tpl, "getHardwareSupport", GetHardwareSupport);

	Nan::SetPrototypeMethod(tpl, "GetLastGraphicErrorString", GetLastGraphicErrorString);
	Nan::SetPrototypeMethod(tpl, "getLastGraphicErrorString", GetLastGraphicErrorString);

	Nan::SetPrototypeMethod(tpl, "GetPixelData", GetPixelData);
	Nan::SetPrototypeMethod(tpl, "getPixelData", GetPixelData);

	Nan::SetPrototypeMethod(tpl, "GetRGBACharPixelData", GetRGBACharPixelData);
	Nan::SetPrototypeMethod(tpl, "getRGBACharPixelData", GetRGBACharPixelData);

	Nan::SetPrototypeMethod(tpl, "GetRGBAPixelData", GetRGBAPixelData);
	Nan::SetPrototypeMethod(tpl, "getRGBAPixelData", GetRGBAPixelData);

	Nan::SetPrototypeMethod(tpl, "GetZbufferData", GetZbufferData);
	Nan::SetPrototypeMethod(tpl, "getZbufferData", GetZbufferData);

	Nan::SetPrototypeMethod(tpl, "HasGraphicError", HasGraphicError);
	Nan::SetPrototypeMethod(tpl, "hasGraphicError", HasGraphicError);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OpenGLInit", OpenGLInit);
	Nan::SetPrototypeMethod(tpl, "openGLInit", OpenGLInit);

	Nan::SetPrototypeMethod(tpl, "OpenGLInitContext", OpenGLInitContext);
	Nan::SetPrototypeMethod(tpl, "openGLInitContext", OpenGLInitContext);

	Nan::SetPrototypeMethod(tpl, "OpenGLInitState", OpenGLInitState);
	Nan::SetPrototypeMethod(tpl, "openGLInitState", OpenGLInitState);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGlobalMaximumNumberOfMultiSamples", SetGlobalMaximumNumberOfMultiSamples);
	Nan::SetPrototypeMethod(tpl, "setGlobalMaximumNumberOfMultiSamples", SetGlobalMaximumNumberOfMultiSamples);

	Nan::SetPrototypeMethod(tpl, "SetPixelData", SetPixelData);
	Nan::SetPrototypeMethod(tpl, "setPixelData", SetPixelData);

	Nan::SetPrototypeMethod(tpl, "SetRGBACharPixelData", SetRGBACharPixelData);
	Nan::SetPrototypeMethod(tpl, "setRGBACharPixelData", SetRGBACharPixelData);

	Nan::SetPrototypeMethod(tpl, "SetRGBAPixelData", SetRGBAPixelData);
	Nan::SetPrototypeMethod(tpl, "setRGBAPixelData", SetRGBAPixelData);

	Nan::SetPrototypeMethod(tpl, "SetZbufferData", SetZbufferData);
	Nan::SetPrototypeMethod(tpl, "setZbufferData", SetZbufferData);

	Nan::SetPrototypeMethod(tpl, "StereoUpdate", StereoUpdate);
	Nan::SetPrototypeMethod(tpl, "stereoUpdate", StereoUpdate);

	Nan::SetPrototypeMethod(tpl, "WaitForCompletion", WaitForCompletion);
	Nan::SetPrototypeMethod(tpl, "waitForCompletion", WaitForCompletion);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkOpenGLRenderWindowWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLRenderWindowWrap::CheckGraphicError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CheckGraphicError();
}

void VtkOpenGLRenderWindowWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLRenderWindowWrap::GetDepthBufferSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthBufferSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLRenderWindowWrap::GetExtensionManager(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	vtkOpenGLExtensionManager * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtensionManager();
		VtkOpenGLExtensionManagerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOpenGLExtensionManagerWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLExtensionManagerWrap *w = new VtkOpenGLExtensionManagerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLRenderWindowWrap::GetGlobalMaximumNumberOfMultiSamples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlobalMaximumNumberOfMultiSamples();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLRenderWindowWrap::GetHardwareSupport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	vtkOpenGLHardwareSupport * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHardwareSupport();
		VtkOpenGLHardwareSupportWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOpenGLHardwareSupportWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLHardwareSupportWrap *w = new VtkOpenGLHardwareSupportWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLRenderWindowWrap::GetLastGraphicErrorString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastGraphicErrorString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLRenderWindowWrap::GetPixelData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[5]))
						{
							VtkUnsignedCharArrayWrap *a5 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[5]->ToObject());
							int r;
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							r = native->GetPixelData(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								(vtkUnsignedCharArray *) a5->native.GetPointer()
							);
							info.GetReturnValue().Set(Nan::New(r));
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderWindowWrap::GetRGBACharPixelData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[5]))
						{
							VtkUnsignedCharArrayWrap *a5 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[5]->ToObject());
							int r;
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							r = native->GetRGBACharPixelData(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								(vtkUnsignedCharArray *) a5->native.GetPointer()
							);
							info.GetReturnValue().Set(Nan::New(r));
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderWindowWrap::GetRGBAPixelData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkFloatArrayWrap::ptpl))->HasInstance(info[5]))
						{
							VtkFloatArrayWrap *a5 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[5]->ToObject());
							int r;
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							r = native->GetRGBAPixelData(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								(vtkFloatArray *) a5->native.GetPointer()
							);
							info.GetReturnValue().Set(Nan::New(r));
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderWindowWrap::GetZbufferData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkFloatArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkFloatArrayWrap *a4 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[4]->ToObject());
						int r;
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						r = native->GetZbufferData(
							info[0]->Int32Value(),
							info[1]->Int32Value(),
							info[2]->Int32Value(),
							info[3]->Int32Value(),
							(vtkFloatArray *) a4->native.GetPointer()
						);
						info.GetReturnValue().Set(Nan::New(r));
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderWindowWrap::HasGraphicError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasGraphicError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLRenderWindowWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderWindowWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	vtkOpenGLRenderWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOpenGLRenderWindowWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOpenGLRenderWindowWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLRenderWindowWrap *w = new VtkOpenGLRenderWindowWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLRenderWindowWrap::OpenGLInit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OpenGLInit();
}

void VtkOpenGLRenderWindowWrap::OpenGLInitContext(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OpenGLInitContext();
}

void VtkOpenGLRenderWindowWrap::OpenGLInitState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OpenGLInitState();
}

void VtkOpenGLRenderWindowWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLRenderWindow * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOpenGLRenderWindowWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkOpenGLRenderWindowWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLRenderWindowWrap *w = new VtkOpenGLRenderWindowWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderWindowWrap::SetGlobalMaximumNumberOfMultiSamples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGlobalMaximumNumberOfMultiSamples(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderWindowWrap::SetPixelData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkUnsignedCharArrayWrap *a4 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							int r;
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							r = native->SetPixelData(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								(vtkUnsignedCharArray *) a4->native.GetPointer(),
								info[5]->Int32Value()
							);
							info.GetReturnValue().Set(Nan::New(r));
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderWindowWrap::SetRGBACharPixelData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkUnsignedCharArrayWrap *a4 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() > 6 && info[6]->IsInt32())
							{
								int r;
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								r = native->SetRGBACharPixelData(
									info[0]->Int32Value(),
									info[1]->Int32Value(),
									info[2]->Int32Value(),
									info[3]->Int32Value(),
									(vtkUnsignedCharArray *) a4->native.GetPointer(),
									info[5]->Int32Value(),
									info[6]->Int32Value()
								);
								info.GetReturnValue().Set(Nan::New(r));
								return;
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderWindowWrap::SetRGBAPixelData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkFloatArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkFloatArrayWrap *a4 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() > 6 && info[6]->IsInt32())
							{
								int r;
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								r = native->SetRGBAPixelData(
									info[0]->Int32Value(),
									info[1]->Int32Value(),
									info[2]->Int32Value(),
									info[3]->Int32Value(),
									(vtkFloatArray *) a4->native.GetPointer(),
									info[5]->Int32Value(),
									info[6]->Int32Value()
								);
								info.GetReturnValue().Set(Nan::New(r));
								return;
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderWindowWrap::SetZbufferData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkFloatArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkFloatArrayWrap *a4 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[4]->ToObject());
						int r;
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						r = native->SetZbufferData(
							info[0]->Int32Value(),
							info[1]->Int32Value(),
							info[2]->Int32Value(),
							info[3]->Int32Value(),
							(vtkFloatArray *) a4->native.GetPointer()
						);
						info.GetReturnValue().Set(Nan::New(r));
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderWindowWrap::StereoUpdate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StereoUpdate();
}

void VtkOpenGLRenderWindowWrap::WaitForCompletion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WaitForCompletion();
}

