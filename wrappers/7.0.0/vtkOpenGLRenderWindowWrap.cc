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
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
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

	Nan::SetPrototypeMethod(tpl, "GetBackBuffer", GetBackBuffer);
	Nan::SetPrototypeMethod(tpl, "getBackBuffer", GetBackBuffer);

	Nan::SetPrototypeMethod(tpl, "GetBackLeftBuffer", GetBackLeftBuffer);
	Nan::SetPrototypeMethod(tpl, "getBackLeftBuffer", GetBackLeftBuffer);

	Nan::SetPrototypeMethod(tpl, "GetBackRightBuffer", GetBackRightBuffer);
	Nan::SetPrototypeMethod(tpl, "getBackRightBuffer", GetBackRightBuffer);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetContextSupportsOpenGL32", GetContextSupportsOpenGL32);
	Nan::SetPrototypeMethod(tpl, "getContextSupportsOpenGL32", GetContextSupportsOpenGL32);

	Nan::SetPrototypeMethod(tpl, "GetDefaultTextureInternalFormat", GetDefaultTextureInternalFormat);
	Nan::SetPrototypeMethod(tpl, "getDefaultTextureInternalFormat", GetDefaultTextureInternalFormat);

	Nan::SetPrototypeMethod(tpl, "GetDepthBufferSize", GetDepthBufferSize);
	Nan::SetPrototypeMethod(tpl, "getDepthBufferSize", GetDepthBufferSize);

	Nan::SetPrototypeMethod(tpl, "GetFrontBuffer", GetFrontBuffer);
	Nan::SetPrototypeMethod(tpl, "getFrontBuffer", GetFrontBuffer);

	Nan::SetPrototypeMethod(tpl, "GetFrontLeftBuffer", GetFrontLeftBuffer);
	Nan::SetPrototypeMethod(tpl, "getFrontLeftBuffer", GetFrontLeftBuffer);

	Nan::SetPrototypeMethod(tpl, "GetFrontRightBuffer", GetFrontRightBuffer);
	Nan::SetPrototypeMethod(tpl, "getFrontRightBuffer", GetFrontRightBuffer);

	Nan::SetPrototypeMethod(tpl, "GetGlobalMaximumNumberOfMultiSamples", GetGlobalMaximumNumberOfMultiSamples);
	Nan::SetPrototypeMethod(tpl, "getGlobalMaximumNumberOfMultiSamples", GetGlobalMaximumNumberOfMultiSamples);

	Nan::SetPrototypeMethod(tpl, "GetPixelData", GetPixelData);
	Nan::SetPrototypeMethod(tpl, "getPixelData", GetPixelData);

	Nan::SetPrototypeMethod(tpl, "GetRGBACharPixelData", GetRGBACharPixelData);
	Nan::SetPrototypeMethod(tpl, "getRGBACharPixelData", GetRGBACharPixelData);

	Nan::SetPrototypeMethod(tpl, "GetRGBAPixelData", GetRGBAPixelData);
	Nan::SetPrototypeMethod(tpl, "getRGBAPixelData", GetRGBAPixelData);

	Nan::SetPrototypeMethod(tpl, "GetZbufferData", GetZbufferData);
	Nan::SetPrototypeMethod(tpl, "getZbufferData", GetZbufferData);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsPointSpriteBugPresent", IsPointSpriteBugPresent);
	Nan::SetPrototypeMethod(tpl, "isPointSpriteBugPresent", IsPointSpriteBugPresent);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OpenGLInit", OpenGLInit);
	Nan::SetPrototypeMethod(tpl, "openGLInit", OpenGLInit);

	Nan::SetPrototypeMethod(tpl, "OpenGLInitContext", OpenGLInitContext);
	Nan::SetPrototypeMethod(tpl, "openGLInitContext", OpenGLInitContext);

	Nan::SetPrototypeMethod(tpl, "OpenGLInitState", OpenGLInitState);
	Nan::SetPrototypeMethod(tpl, "openGLInitState", OpenGLInitState);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetContextSupportsOpenGL32", SetContextSupportsOpenGL32);
	Nan::SetPrototypeMethod(tpl, "setContextSupportsOpenGL32", SetContextSupportsOpenGL32);

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

#ifdef VTK_NODE_PLUS_VTKOPENGLRENDERWINDOWWRAP_INITPTPL
	VTK_NODE_PLUS_VTKOPENGLRENDERWINDOWWRAP_INITPTPL
#endif
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLRenderWindowWrap::GetBackBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBackBuffer();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLRenderWindowWrap::GetBackLeftBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBackLeftBuffer();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLRenderWindowWrap::GetBackRightBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBackRightBuffer();
	info.GetReturnValue().Set(Nan::New(r));
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

void VtkOpenGLRenderWindowWrap::GetContextSupportsOpenGL32(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContextSupportsOpenGL32();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLRenderWindowWrap::GetDefaultTextureInternalFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsBoolean())
			{
				if(info.Length() > 3 && info[3]->IsBoolean())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->GetDefaultTextureInternalFormat(
						info[0]->Int32Value(),
						info[1]->Int32Value(),
						info[2]->BooleanValue(),
						info[3]->BooleanValue()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
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

void VtkOpenGLRenderWindowWrap::GetFrontBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrontBuffer();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLRenderWindowWrap::GetFrontLeftBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrontLeftBuffer();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLRenderWindowWrap::GetFrontRightBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrontRightBuffer();
	info.GetReturnValue().Set(Nan::New(r));
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

void VtkOpenGLRenderWindowWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkOpenGLRenderWindowWrap::IsPointSpriteBugPresent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsPointSpriteBugPresent();
	info.GetReturnValue().Set(Nan::New(r));
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
		Nan::New<v8::FunctionTemplate>(VtkOpenGLRenderWindowWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLRenderWindowWrap *w = new VtkOpenGLRenderWindowWrap();
	w->native = r;
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

void VtkOpenGLRenderWindowWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Render();
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
			Nan::New<v8::FunctionTemplate>(VtkOpenGLRenderWindowWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLRenderWindowWrap *w = new VtkOpenGLRenderWindowWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderWindowWrap::SetContextSupportsOpenGL32(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderWindowWrap>(info.Holder());
	vtkOpenGLRenderWindow *native = (vtkOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetContextSupportsOpenGL32(
			info[0]->BooleanValue()
		);
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

