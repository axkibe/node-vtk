/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkTextureObjectWrap.h"
#include "vtkRenderWindowWrap.h"
#include "vtkPixelBufferObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTextureObjectWrap::ptpl;

VtkTextureObjectWrap::VtkTextureObjectWrap()
{ }

VtkTextureObjectWrap::VtkTextureObjectWrap(vtkSmartPointer<vtkTextureObject> _native)
{ native = _native; }

VtkTextureObjectWrap::~VtkTextureObjectWrap()
{ }

void VtkTextureObjectWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTextureObject").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TextureObject").ToLocalChecked(), ConstructorGetter);
}

void VtkTextureObjectWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTextureObjectWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTextureObjectWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Bind", Bind);
	Nan::SetPrototypeMethod(tpl, "bind", Bind);

	Nan::SetPrototypeMethod(tpl, "CopyFromFrameBuffer", CopyFromFrameBuffer);
	Nan::SetPrototypeMethod(tpl, "copyFromFrameBuffer", CopyFromFrameBuffer);

	Nan::SetPrototypeMethod(tpl, "CopyToFrameBuffer", CopyToFrameBuffer);
	Nan::SetPrototypeMethod(tpl, "copyToFrameBuffer", CopyToFrameBuffer);

	Nan::SetPrototypeMethod(tpl, "Create1D", Create1D);
	Nan::SetPrototypeMethod(tpl, "create1D", Create1D);

	Nan::SetPrototypeMethod(tpl, "Download", Download);
	Nan::SetPrototypeMethod(tpl, "download", Download);

	Nan::SetPrototypeMethod(tpl, "GetAutoParameters", GetAutoParameters);
	Nan::SetPrototypeMethod(tpl, "getAutoParameters", GetAutoParameters);

	Nan::SetPrototypeMethod(tpl, "GetBaseLevel", GetBaseLevel);
	Nan::SetPrototypeMethod(tpl, "getBaseLevel", GetBaseLevel);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComponents", GetComponents);
	Nan::SetPrototypeMethod(tpl, "getComponents", GetComponents);

	Nan::SetPrototypeMethod(tpl, "GetContext", GetContext);
	Nan::SetPrototypeMethod(tpl, "getContext", GetContext);

	Nan::SetPrototypeMethod(tpl, "GetDataType", GetDataType);
	Nan::SetPrototypeMethod(tpl, "getDataType", GetDataType);

	Nan::SetPrototypeMethod(tpl, "GetDepthTextureCompare", GetDepthTextureCompare);
	Nan::SetPrototypeMethod(tpl, "getDepthTextureCompare", GetDepthTextureCompare);

	Nan::SetPrototypeMethod(tpl, "GetDepthTextureCompareFunction", GetDepthTextureCompareFunction);
	Nan::SetPrototypeMethod(tpl, "getDepthTextureCompareFunction", GetDepthTextureCompareFunction);

	Nan::SetPrototypeMethod(tpl, "GetDepthTextureMode", GetDepthTextureMode);
	Nan::SetPrototypeMethod(tpl, "getDepthTextureMode", GetDepthTextureMode);

	Nan::SetPrototypeMethod(tpl, "GetGenerateMipmap", GetGenerateMipmap);
	Nan::SetPrototypeMethod(tpl, "getGenerateMipmap", GetGenerateMipmap);

	Nan::SetPrototypeMethod(tpl, "GetLinearMagnification", GetLinearMagnification);
	Nan::SetPrototypeMethod(tpl, "getLinearMagnification", GetLinearMagnification);

	Nan::SetPrototypeMethod(tpl, "GetMagnificationFilter", GetMagnificationFilter);
	Nan::SetPrototypeMethod(tpl, "getMagnificationFilter", GetMagnificationFilter);

	Nan::SetPrototypeMethod(tpl, "GetMaxLevel", GetMaxLevel);
	Nan::SetPrototypeMethod(tpl, "getMaxLevel", GetMaxLevel);

	Nan::SetPrototypeMethod(tpl, "GetMinificationFilter", GetMinificationFilter);
	Nan::SetPrototypeMethod(tpl, "getMinificationFilter", GetMinificationFilter);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfDimensions", GetNumberOfDimensions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfDimensions", GetNumberOfDimensions);

	Nan::SetPrototypeMethod(tpl, "GetRequireDepthBufferFloat", GetRequireDepthBufferFloat);
	Nan::SetPrototypeMethod(tpl, "getRequireDepthBufferFloat", GetRequireDepthBufferFloat);

	Nan::SetPrototypeMethod(tpl, "GetRequireTextureFloat", GetRequireTextureFloat);
	Nan::SetPrototypeMethod(tpl, "getRequireTextureFloat", GetRequireTextureFloat);

	Nan::SetPrototypeMethod(tpl, "GetRequireTextureInteger", GetRequireTextureInteger);
	Nan::SetPrototypeMethod(tpl, "getRequireTextureInteger", GetRequireTextureInteger);

	Nan::SetPrototypeMethod(tpl, "GetSupportsDepthBufferFloat", GetSupportsDepthBufferFloat);
	Nan::SetPrototypeMethod(tpl, "getSupportsDepthBufferFloat", GetSupportsDepthBufferFloat);

	Nan::SetPrototypeMethod(tpl, "GetSupportsTextureFloat", GetSupportsTextureFloat);
	Nan::SetPrototypeMethod(tpl, "getSupportsTextureFloat", GetSupportsTextureFloat);

	Nan::SetPrototypeMethod(tpl, "GetSupportsTextureInteger", GetSupportsTextureInteger);
	Nan::SetPrototypeMethod(tpl, "getSupportsTextureInteger", GetSupportsTextureInteger);

	Nan::SetPrototypeMethod(tpl, "GetWrapR", GetWrapR);
	Nan::SetPrototypeMethod(tpl, "getWrapR", GetWrapR);

	Nan::SetPrototypeMethod(tpl, "GetWrapS", GetWrapS);
	Nan::SetPrototypeMethod(tpl, "getWrapS", GetWrapS);

	Nan::SetPrototypeMethod(tpl, "GetWrapT", GetWrapT);
	Nan::SetPrototypeMethod(tpl, "getWrapT", GetWrapT);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsBound", IsBound);
	Nan::SetPrototypeMethod(tpl, "isBound", IsBound);

	Nan::SetPrototypeMethod(tpl, "IsSupported", IsSupported);
	Nan::SetPrototypeMethod(tpl, "isSupported", IsSupported);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SendParameters", SendParameters);
	Nan::SetPrototypeMethod(tpl, "sendParameters", SendParameters);

	Nan::SetPrototypeMethod(tpl, "SetAutoParameters", SetAutoParameters);
	Nan::SetPrototypeMethod(tpl, "setAutoParameters", SetAutoParameters);

	Nan::SetPrototypeMethod(tpl, "SetBaseLevel", SetBaseLevel);
	Nan::SetPrototypeMethod(tpl, "setBaseLevel", SetBaseLevel);

	Nan::SetPrototypeMethod(tpl, "SetContext", SetContext);
	Nan::SetPrototypeMethod(tpl, "setContext", SetContext);

	Nan::SetPrototypeMethod(tpl, "SetDepthTextureCompare", SetDepthTextureCompare);
	Nan::SetPrototypeMethod(tpl, "setDepthTextureCompare", SetDepthTextureCompare);

	Nan::SetPrototypeMethod(tpl, "SetDepthTextureCompareFunction", SetDepthTextureCompareFunction);
	Nan::SetPrototypeMethod(tpl, "setDepthTextureCompareFunction", SetDepthTextureCompareFunction);

	Nan::SetPrototypeMethod(tpl, "SetDepthTextureMode", SetDepthTextureMode);
	Nan::SetPrototypeMethod(tpl, "setDepthTextureMode", SetDepthTextureMode);

	Nan::SetPrototypeMethod(tpl, "SetGenerateMipmap", SetGenerateMipmap);
	Nan::SetPrototypeMethod(tpl, "setGenerateMipmap", SetGenerateMipmap);

	Nan::SetPrototypeMethod(tpl, "SetLinearMagnification", SetLinearMagnification);
	Nan::SetPrototypeMethod(tpl, "setLinearMagnification", SetLinearMagnification);

	Nan::SetPrototypeMethod(tpl, "SetMagnificationFilter", SetMagnificationFilter);
	Nan::SetPrototypeMethod(tpl, "setMagnificationFilter", SetMagnificationFilter);

	Nan::SetPrototypeMethod(tpl, "SetMaxLevel", SetMaxLevel);
	Nan::SetPrototypeMethod(tpl, "setMaxLevel", SetMaxLevel);

	Nan::SetPrototypeMethod(tpl, "SetMinificationFilter", SetMinificationFilter);
	Nan::SetPrototypeMethod(tpl, "setMinificationFilter", SetMinificationFilter);

	Nan::SetPrototypeMethod(tpl, "SetRequireDepthBufferFloat", SetRequireDepthBufferFloat);
	Nan::SetPrototypeMethod(tpl, "setRequireDepthBufferFloat", SetRequireDepthBufferFloat);

	Nan::SetPrototypeMethod(tpl, "SetRequireTextureFloat", SetRequireTextureFloat);
	Nan::SetPrototypeMethod(tpl, "setRequireTextureFloat", SetRequireTextureFloat);

	Nan::SetPrototypeMethod(tpl, "SetRequireTextureInteger", SetRequireTextureInteger);
	Nan::SetPrototypeMethod(tpl, "setRequireTextureInteger", SetRequireTextureInteger);

	Nan::SetPrototypeMethod(tpl, "SetWrapR", SetWrapR);
	Nan::SetPrototypeMethod(tpl, "setWrapR", SetWrapR);

	Nan::SetPrototypeMethod(tpl, "SetWrapS", SetWrapS);
	Nan::SetPrototypeMethod(tpl, "setWrapS", SetWrapS);

	Nan::SetPrototypeMethod(tpl, "SetWrapT", SetWrapT);
	Nan::SetPrototypeMethod(tpl, "setWrapT", SetWrapT);

	Nan::SetPrototypeMethod(tpl, "UnBind", UnBind);
	Nan::SetPrototypeMethod(tpl, "unBind", UnBind);

	ptpl.Reset( tpl );
}

void VtkTextureObjectWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTextureObject> native = vtkSmartPointer<vtkTextureObject>::New();
		VtkTextureObjectWrap* obj = new VtkTextureObjectWrap(native);
		obj->Wrap(info.This());
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

void VtkTextureObjectWrap::Bind(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Bind();
}

void VtkTextureObjectWrap::CopyFromFrameBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
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
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->CopyFromFrameBuffer(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::CopyToFrameBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
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
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() > 6 && info[6]->IsInt32())
							{
								if(info.Length() > 7 && info[7]->IsInt32())
								{
									if(info.Length() != 8)
									{
										Nan::ThrowError("Too many parameters.");
										return;
									}
									native->CopyToFrameBuffer(
										info[0]->Int32Value(),
										info[1]->Int32Value(),
										info[2]->Int32Value(),
										info[3]->Int32Value(),
										info[4]->Int32Value(),
										info[5]->Int32Value(),
										info[6]->Int32Value(),
										info[7]->Int32Value()
									);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::Create1D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPixelBufferObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPixelBufferObjectWrap *a1 = ObjectWrap::Unwrap<VtkPixelBufferObjectWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsBoolean())
			{
				bool r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Create1D(
					info[0]->Int32Value(),
					(vtkPixelBufferObject *) a1->native.GetPointer(),
					info[2]->BooleanValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::Download(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	vtkPixelBufferObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Download();
		VtkPixelBufferObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPixelBufferObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPixelBufferObjectWrap *w = new VtkPixelBufferObjectWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextureObjectWrap::GetAutoParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutoParameters();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetBaseLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBaseLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextureObjectWrap::GetComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetContext(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	vtkRenderWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContext();
		VtkRenderWindowWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderWindowWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowWrap *w = new VtkRenderWindowWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextureObjectWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetDepthTextureCompare(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthTextureCompare();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetDepthTextureCompareFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthTextureCompareFunction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetDepthTextureMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthTextureMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetGenerateMipmap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateMipmap();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetLinearMagnification(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLinearMagnification();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetMagnificationFilter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMagnificationFilter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetMinificationFilter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinificationFilter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetNumberOfDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfDimensions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetRequireDepthBufferFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRequireDepthBufferFloat();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetRequireTextureFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRequireTextureFloat();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetRequireTextureInteger(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRequireTextureInteger();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetSupportsDepthBufferFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSupportsDepthBufferFloat();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetSupportsTextureFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSupportsTextureFloat();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetSupportsTextureInteger(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSupportsTextureInteger();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetWrapR(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWrapR();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetWrapS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWrapS();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::GetWrapT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWrapT();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
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

void VtkTextureObjectWrap::IsBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureObjectWrap::IsSupported(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsBoolean())
		{
			if(info.Length() > 2 && info[2]->IsBoolean())
			{
				if(info.Length() > 3 && info[3]->IsBoolean())
				{
					bool r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->IsSupported(
						(vtkRenderWindow *) a0->native.GetPointer(),
						info[1]->BooleanValue(),
						info[2]->BooleanValue(),
						info[3]->BooleanValue()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsSupported(
			(vtkRenderWindow *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	vtkTextureObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTextureObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextureObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextureObjectWrap *w = new VtkTextureObjectWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextureObjectWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTextureObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTextureObjectWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTextureObjectWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTextureObjectWrap *w = new VtkTextureObjectWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SendParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SendParameters();
}

void VtkTextureObjectWrap::SetAutoParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutoParameters(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetBaseLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBaseLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetContext(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetContext(
			(vtkRenderWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetDepthTextureCompare(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDepthTextureCompare(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetDepthTextureCompareFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDepthTextureCompareFunction(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetDepthTextureMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDepthTextureMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetGenerateMipmap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateMipmap(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetLinearMagnification(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLinearMagnification(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetMagnificationFilter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMagnificationFilter(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetMinificationFilter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinificationFilter(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetRequireDepthBufferFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRequireDepthBufferFloat(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetRequireTextureFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRequireTextureFloat(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetRequireTextureInteger(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRequireTextureInteger(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetWrapR(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWrapR(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetWrapS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWrapS(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::SetWrapT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWrapT(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureObjectWrap::UnBind(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureObjectWrap *wrapper = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info.Holder());
	vtkTextureObject *native = (vtkTextureObject *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UnBind();
}

