/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkTransformTextureCoordsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTransformTextureCoordsWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTransformTextureCoordsWrap::ptpl;

VtkTransformTextureCoordsWrap::VtkTransformTextureCoordsWrap()
{ }

VtkTransformTextureCoordsWrap::VtkTransformTextureCoordsWrap(vtkSmartPointer<vtkTransformTextureCoords> _native)
{ native = _native; }

VtkTransformTextureCoordsWrap::~VtkTransformTextureCoordsWrap()
{ }

void VtkTransformTextureCoordsWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkTransformTextureCoordsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkTransformTextureCoords").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("TransformTextureCoords").ToLocalChecked(),tpl->GetFunction());
}

void VtkTransformTextureCoordsWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddPosition", AddPosition);
	Nan::SetPrototypeMethod(tpl, "addPosition", AddPosition);

	Nan::SetPrototypeMethod(tpl, "FlipROff", FlipROff);
	Nan::SetPrototypeMethod(tpl, "flipROff", FlipROff);

	Nan::SetPrototypeMethod(tpl, "FlipROn", FlipROn);
	Nan::SetPrototypeMethod(tpl, "flipROn", FlipROn);

	Nan::SetPrototypeMethod(tpl, "FlipSOff", FlipSOff);
	Nan::SetPrototypeMethod(tpl, "flipSOff", FlipSOff);

	Nan::SetPrototypeMethod(tpl, "FlipSOn", FlipSOn);
	Nan::SetPrototypeMethod(tpl, "flipSOn", FlipSOn);

	Nan::SetPrototypeMethod(tpl, "FlipTOff", FlipTOff);
	Nan::SetPrototypeMethod(tpl, "flipTOff", FlipTOff);

	Nan::SetPrototypeMethod(tpl, "FlipTOn", FlipTOn);
	Nan::SetPrototypeMethod(tpl, "flipTOn", FlipTOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFlipR", GetFlipR);
	Nan::SetPrototypeMethod(tpl, "getFlipR", GetFlipR);

	Nan::SetPrototypeMethod(tpl, "GetFlipS", GetFlipS);
	Nan::SetPrototypeMethod(tpl, "getFlipS", GetFlipS);

	Nan::SetPrototypeMethod(tpl, "GetFlipT", GetFlipT);
	Nan::SetPrototypeMethod(tpl, "getFlipT", GetFlipT);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFlipR", SetFlipR);
	Nan::SetPrototypeMethod(tpl, "setFlipR", SetFlipR);

	Nan::SetPrototypeMethod(tpl, "SetFlipS", SetFlipS);
	Nan::SetPrototypeMethod(tpl, "setFlipS", SetFlipS);

	Nan::SetPrototypeMethod(tpl, "SetFlipT", SetFlipT);
	Nan::SetPrototypeMethod(tpl, "setFlipT", SetFlipT);

	Nan::SetPrototypeMethod(tpl, "SetOrigin", SetOrigin);
	Nan::SetPrototypeMethod(tpl, "setOrigin", SetOrigin);

	Nan::SetPrototypeMethod(tpl, "SetPosition", SetPosition);
	Nan::SetPrototypeMethod(tpl, "setPosition", SetPosition);

	Nan::SetPrototypeMethod(tpl, "SetScale", SetScale);
	Nan::SetPrototypeMethod(tpl, "setScale", SetScale);

}

void VtkTransformTextureCoordsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTransformTextureCoords> native = vtkSmartPointer<vtkTransformTextureCoords>::New();
		VtkTransformTextureCoordsWrap* obj = new VtkTransformTextureCoordsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTransformTextureCoordsWrap::AddPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->AddPosition(
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

void VtkTransformTextureCoordsWrap::FlipROff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FlipROff();
}

void VtkTransformTextureCoordsWrap::FlipROn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FlipROn();
}

void VtkTransformTextureCoordsWrap::FlipSOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FlipSOff();
}

void VtkTransformTextureCoordsWrap::FlipSOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FlipSOn();
}

void VtkTransformTextureCoordsWrap::FlipTOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FlipTOff();
}

void VtkTransformTextureCoordsWrap::FlipTOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FlipTOn();
}

void VtkTransformTextureCoordsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransformTextureCoordsWrap::GetFlipR(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFlipR();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformTextureCoordsWrap::GetFlipS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFlipS();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformTextureCoordsWrap::GetFlipT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFlipT();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformTextureCoordsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
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

void VtkTransformTextureCoordsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	vtkTransformTextureCoords * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTransformTextureCoordsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransformTextureCoordsWrap *w = new VtkTransformTextureCoordsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformTextureCoordsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTransformTextureCoords * r;
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
			Nan::New<v8::Function>(VtkTransformTextureCoordsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTransformTextureCoordsWrap *w = new VtkTransformTextureCoordsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformTextureCoordsWrap::SetFlipR(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFlipR(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformTextureCoordsWrap::SetFlipS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFlipS(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformTextureCoordsWrap::SetFlipT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFlipT(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformTextureCoordsWrap::SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOrigin(
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

void VtkTransformTextureCoordsWrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetPosition(
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

void VtkTransformTextureCoordsWrap::SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformTextureCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformTextureCoordsWrap>(info.Holder());
	vtkTransformTextureCoords *native = (vtkTransformTextureCoords *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetScale(
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
