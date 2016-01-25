/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkBrushWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkBrushWrap::constructor;

VtkBrushWrap::VtkBrushWrap()
{ }

VtkBrushWrap::VtkBrushWrap(vtkSmartPointer<vtkBrush> _native)
{ native = _native; }

VtkBrushWrap::~VtkBrushWrap()
{ }

void VtkBrushWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkBrushWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkBrush").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Brush").ToLocalChecked(),tpl->GetFunction());
}

void VtkBrushWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOpacityF", GetOpacityF);
	Nan::SetPrototypeMethod(tpl, "getOpacityF", GetOpacityF);

	Nan::SetPrototypeMethod(tpl, "GetTexture", GetTexture);
	Nan::SetPrototypeMethod(tpl, "getTexture", GetTexture);

	Nan::SetPrototypeMethod(tpl, "GetTextureProperties", GetTextureProperties);
	Nan::SetPrototypeMethod(tpl, "getTextureProperties", GetTextureProperties);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorF", SetColorF);
	Nan::SetPrototypeMethod(tpl, "setColorF", SetColorF);

	Nan::SetPrototypeMethod(tpl, "SetOpacityF", SetOpacityF);
	Nan::SetPrototypeMethod(tpl, "setOpacityF", SetOpacityF);

	Nan::SetPrototypeMethod(tpl, "SetTexture", SetTexture);
	Nan::SetPrototypeMethod(tpl, "setTexture", SetTexture);

	Nan::SetPrototypeMethod(tpl, "SetTextureProperties", SetTextureProperties);
	Nan::SetPrototypeMethod(tpl, "setTextureProperties", SetTextureProperties);

}

void VtkBrushWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBrush> native = vtkSmartPointer<vtkBrush>::New();
		VtkBrushWrap* obj = new VtkBrushWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBrushWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkBrushWrap *a0 = ObjectWrap::Unwrap<VtkBrushWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkBrush *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBrushWrap::GetOpacityF(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpacityF();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrushWrap::GetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTexture();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBrushWrap::GetTextureProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureProperties();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrushWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
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

void VtkBrushWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	vtkBrush * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkBrushWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBrushWrap *w = new VtkBrushWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBrushWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBrush * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkBrushWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBrushWrap *w = new VtkBrushWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::SetColorF(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetColorF(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetColorF(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::SetOpacityF(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOpacityF(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::SetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTexture(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::SetTextureProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextureProperties(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

