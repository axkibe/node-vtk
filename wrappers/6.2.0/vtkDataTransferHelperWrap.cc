/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkDataTransferHelperWrap.h"
#include "vtkRenderWindowWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkTextureObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDataTransferHelperWrap::ptpl;

VtkDataTransferHelperWrap::VtkDataTransferHelperWrap()
{ }

VtkDataTransferHelperWrap::VtkDataTransferHelperWrap(vtkSmartPointer<vtkDataTransferHelper> _native)
{ native = _native; }

VtkDataTransferHelperWrap::~VtkDataTransferHelperWrap()
{ }

void VtkDataTransferHelperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDataTransferHelper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DataTransferHelper").ToLocalChecked(), ConstructorGetter);
}

void VtkDataTransferHelperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDataTransferHelperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDataTransferHelperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Download", Download);
	Nan::SetPrototypeMethod(tpl, "download", Download);

	Nan::SetPrototypeMethod(tpl, "DownloadAsync1", DownloadAsync1);
	Nan::SetPrototypeMethod(tpl, "downloadAsync1", DownloadAsync1);

	Nan::SetPrototypeMethod(tpl, "DownloadAsync2", DownloadAsync2);
	Nan::SetPrototypeMethod(tpl, "downloadAsync2", DownloadAsync2);

	Nan::SetPrototypeMethod(tpl, "GetArray", GetArray);
	Nan::SetPrototypeMethod(tpl, "getArray", GetArray);

	Nan::SetPrototypeMethod(tpl, "GetCPUExtentIsValid", GetCPUExtentIsValid);
	Nan::SetPrototypeMethod(tpl, "getCPUExtentIsValid", GetCPUExtentIsValid);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetContext", GetContext);
	Nan::SetPrototypeMethod(tpl, "getContext", GetContext);

	Nan::SetPrototypeMethod(tpl, "GetGPUExtentIsValid", GetGPUExtentIsValid);
	Nan::SetPrototypeMethod(tpl, "getGPUExtentIsValid", GetGPUExtentIsValid);

	Nan::SetPrototypeMethod(tpl, "GetMinTextureDimension", GetMinTextureDimension);
	Nan::SetPrototypeMethod(tpl, "getMinTextureDimension", GetMinTextureDimension);

	Nan::SetPrototypeMethod(tpl, "GetShaderSupportsTextureInt", GetShaderSupportsTextureInt);
	Nan::SetPrototypeMethod(tpl, "getShaderSupportsTextureInt", GetShaderSupportsTextureInt);

	Nan::SetPrototypeMethod(tpl, "GetTexture", GetTexture);
	Nan::SetPrototypeMethod(tpl, "getTexture", GetTexture);

	Nan::SetPrototypeMethod(tpl, "GetTextureExtentIsValid", GetTextureExtentIsValid);
	Nan::SetPrototypeMethod(tpl, "getTextureExtentIsValid", GetTextureExtentIsValid);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsSupported", IsSupported);
	Nan::SetPrototypeMethod(tpl, "isSupported", IsSupported);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetArray", SetArray);
	Nan::SetPrototypeMethod(tpl, "setArray", SetArray);

	Nan::SetPrototypeMethod(tpl, "SetCPUExtent", SetCPUExtent);
	Nan::SetPrototypeMethod(tpl, "setCPUExtent", SetCPUExtent);

	Nan::SetPrototypeMethod(tpl, "SetContext", SetContext);
	Nan::SetPrototypeMethod(tpl, "setContext", SetContext);

	Nan::SetPrototypeMethod(tpl, "SetGPUExtent", SetGPUExtent);
	Nan::SetPrototypeMethod(tpl, "setGPUExtent", SetGPUExtent);

	Nan::SetPrototypeMethod(tpl, "SetMinTextureDimension", SetMinTextureDimension);
	Nan::SetPrototypeMethod(tpl, "setMinTextureDimension", SetMinTextureDimension);

	Nan::SetPrototypeMethod(tpl, "SetShaderSupportsTextureInt", SetShaderSupportsTextureInt);
	Nan::SetPrototypeMethod(tpl, "setShaderSupportsTextureInt", SetShaderSupportsTextureInt);

	Nan::SetPrototypeMethod(tpl, "SetTexture", SetTexture);
	Nan::SetPrototypeMethod(tpl, "setTexture", SetTexture);

	Nan::SetPrototypeMethod(tpl, "SetTextureExtent", SetTextureExtent);
	Nan::SetPrototypeMethod(tpl, "setTextureExtent", SetTextureExtent);

	ptpl.Reset( tpl );
}

void VtkDataTransferHelperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDataTransferHelper> native = vtkSmartPointer<vtkDataTransferHelper>::New();
		VtkDataTransferHelperWrap* obj = new VtkDataTransferHelperWrap(native);
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

void VtkDataTransferHelperWrap::Download(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Download();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataTransferHelperWrap::DownloadAsync1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DownloadAsync1();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataTransferHelperWrap::DownloadAsync2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DownloadAsync2();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataTransferHelperWrap::GetArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArray();
		VtkDataArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayWrap *w = new VtkDataArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataTransferHelperWrap::GetCPUExtentIsValid(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCPUExtentIsValid();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataTransferHelperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataTransferHelperWrap::GetContext(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
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

void VtkDataTransferHelperWrap::GetGPUExtentIsValid(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGPUExtentIsValid();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataTransferHelperWrap::GetMinTextureDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinTextureDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataTransferHelperWrap::GetShaderSupportsTextureInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShaderSupportsTextureInt();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataTransferHelperWrap::GetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	vtkTextureObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTexture();
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

void VtkDataTransferHelperWrap::GetTextureExtentIsValid(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureExtentIsValid();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataTransferHelperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
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

void VtkDataTransferHelperWrap::IsSupported(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowWrap>(info[0]->ToObject());
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

void VtkDataTransferHelperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	vtkDataTransferHelper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDataTransferHelperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataTransferHelperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataTransferHelperWrap *w = new VtkDataTransferHelperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataTransferHelperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDataTransferHelper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDataTransferHelperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataTransferHelperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataTransferHelperWrap *w = new VtkDataTransferHelperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataTransferHelperWrap::SetArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArray(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataTransferHelperWrap::SetCPUExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
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
							native->SetCPUExtent(
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

void VtkDataTransferHelperWrap::SetContext(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
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

void VtkDataTransferHelperWrap::SetGPUExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
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
							native->SetGPUExtent(
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

void VtkDataTransferHelperWrap::SetMinTextureDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinTextureDimension(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataTransferHelperWrap::SetShaderSupportsTextureInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShaderSupportsTextureInt(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataTransferHelperWrap::SetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextureObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextureObjectWrap *a0 = ObjectWrap::Unwrap<VtkTextureObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTexture(
			(vtkTextureObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataTransferHelperWrap::SetTextureExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataTransferHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDataTransferHelperWrap>(info.Holder());
	vtkDataTransferHelper *native = (vtkDataTransferHelper *)wrapper->native.GetPointer();
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
							native->SetTextureExtent(
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

