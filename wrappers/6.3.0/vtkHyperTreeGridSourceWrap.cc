/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHyperTreeGridAlgorithmWrap.h"
#include "vtkHyperTreeGridSourceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkBitArrayWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkQuadricWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperTreeGridSourceWrap::ptpl;

VtkHyperTreeGridSourceWrap::VtkHyperTreeGridSourceWrap()
{ }

VtkHyperTreeGridSourceWrap::VtkHyperTreeGridSourceWrap(vtkSmartPointer<vtkHyperTreeGridSource> _native)
{ native = _native; }

VtkHyperTreeGridSourceWrap::~VtkHyperTreeGridSourceWrap()
{ }

void VtkHyperTreeGridSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperTreeGridSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperTreeGridSource").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperTreeGridSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperTreeGridSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHyperTreeGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHyperTreeGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperTreeGridSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDescriptor", GetDescriptor);
	Nan::SetPrototypeMethod(tpl, "getDescriptor", GetDescriptor);

	Nan::SetPrototypeMethod(tpl, "GetDescriptorBits", GetDescriptorBits);
	Nan::SetPrototypeMethod(tpl, "getDescriptorBits", GetDescriptorBits);

	Nan::SetPrototypeMethod(tpl, "GetMaterialMask", GetMaterialMask);
	Nan::SetPrototypeMethod(tpl, "getMaterialMask", GetMaterialMask);

	Nan::SetPrototypeMethod(tpl, "GetMaterialMaskBits", GetMaterialMaskBits);
	Nan::SetPrototypeMethod(tpl, "getMaterialMaskBits", GetMaterialMaskBits);

	Nan::SetPrototypeMethod(tpl, "GetQuadric", GetQuadric);
	Nan::SetPrototypeMethod(tpl, "getQuadric", GetQuadric);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDescriptor", SetDescriptor);
	Nan::SetPrototypeMethod(tpl, "setDescriptor", SetDescriptor);

	Nan::SetPrototypeMethod(tpl, "SetDescriptorBits", SetDescriptorBits);
	Nan::SetPrototypeMethod(tpl, "setDescriptorBits", SetDescriptorBits);

	Nan::SetPrototypeMethod(tpl, "SetGridScale", SetGridScale);
	Nan::SetPrototypeMethod(tpl, "setGridScale", SetGridScale);

	Nan::SetPrototypeMethod(tpl, "SetIndexingModeToIJK", SetIndexingModeToIJK);
	Nan::SetPrototypeMethod(tpl, "setIndexingModeToIJK", SetIndexingModeToIJK);

	Nan::SetPrototypeMethod(tpl, "SetIndexingModeToKJI", SetIndexingModeToKJI);
	Nan::SetPrototypeMethod(tpl, "setIndexingModeToKJI", SetIndexingModeToKJI);

	Nan::SetPrototypeMethod(tpl, "SetLevelZeroMaterialIndex", SetLevelZeroMaterialIndex);
	Nan::SetPrototypeMethod(tpl, "setLevelZeroMaterialIndex", SetLevelZeroMaterialIndex);

	Nan::SetPrototypeMethod(tpl, "SetMaterialMask", SetMaterialMask);
	Nan::SetPrototypeMethod(tpl, "setMaterialMask", SetMaterialMask);

	Nan::SetPrototypeMethod(tpl, "SetMaterialMaskBits", SetMaterialMaskBits);
	Nan::SetPrototypeMethod(tpl, "setMaterialMaskBits", SetMaterialMaskBits);

	Nan::SetPrototypeMethod(tpl, "SetOrigin", SetOrigin);
	Nan::SetPrototypeMethod(tpl, "setOrigin", SetOrigin);

	Nan::SetPrototypeMethod(tpl, "SetQuadric", SetQuadric);
	Nan::SetPrototypeMethod(tpl, "setQuadric", SetQuadric);

	Nan::SetPrototypeMethod(tpl, "UseDescriptorOff", UseDescriptorOff);
	Nan::SetPrototypeMethod(tpl, "useDescriptorOff", UseDescriptorOff);

	Nan::SetPrototypeMethod(tpl, "UseDescriptorOn", UseDescriptorOn);
	Nan::SetPrototypeMethod(tpl, "useDescriptorOn", UseDescriptorOn);

	Nan::SetPrototypeMethod(tpl, "UseMaterialMaskOff", UseMaterialMaskOff);
	Nan::SetPrototypeMethod(tpl, "useMaterialMaskOff", UseMaterialMaskOff);

	Nan::SetPrototypeMethod(tpl, "UseMaterialMaskOn", UseMaterialMaskOn);
	Nan::SetPrototypeMethod(tpl, "useMaterialMaskOn", UseMaterialMaskOn);

	ptpl.Reset( tpl );
}

void VtkHyperTreeGridSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperTreeGridSource> native = vtkSmartPointer<vtkHyperTreeGridSource>::New();
		VtkHyperTreeGridSourceWrap* obj = new VtkHyperTreeGridSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHyperTreeGridSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperTreeGridSourceWrap::GetDescriptor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescriptor();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperTreeGridSourceWrap::GetDescriptorBits(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	vtkBitArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescriptorBits();
		VtkBitArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBitArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBitArrayWrap *w = new VtkBitArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridSourceWrap::GetMaterialMask(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaterialMask();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperTreeGridSourceWrap::GetMaterialMaskBits(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	vtkBitArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaterialMaskBits();
		VtkBitArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBitArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBitArrayWrap *w = new VtkBitArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridSourceWrap::GetQuadric(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	vtkQuadric * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQuadric();
		VtkQuadricWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkQuadricWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkQuadricWrap *w = new VtkQuadricWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
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

void VtkHyperTreeGridSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	vtkHyperTreeGridSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHyperTreeGridSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperTreeGridSourceWrap *w = new VtkHyperTreeGridSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHyperTreeGridSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHyperTreeGridSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperTreeGridSourceWrap *w = new VtkHyperTreeGridSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridSourceWrap::SetDescriptor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDescriptor(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridSourceWrap::SetDescriptorBits(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBitArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBitArrayWrap *a0 = ObjectWrap::Unwrap<VtkBitArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDescriptorBits(
			(vtkBitArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridSourceWrap::SetGridScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
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
				native->SetGridScale(
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

void VtkHyperTreeGridSourceWrap::SetIndexingModeToIJK(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIndexingModeToIJK();
}

void VtkHyperTreeGridSourceWrap::SetIndexingModeToKJI(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIndexingModeToKJI();
}

void VtkHyperTreeGridSourceWrap::SetLevelZeroMaterialIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdTypeArrayWrap *a0 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLevelZeroMaterialIndex(
			(vtkIdTypeArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridSourceWrap::SetMaterialMask(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaterialMask(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridSourceWrap::SetMaterialMaskBits(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBitArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBitArrayWrap *a0 = ObjectWrap::Unwrap<VtkBitArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaterialMaskBits(
			(vtkBitArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridSourceWrap::SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
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

void VtkHyperTreeGridSourceWrap::SetQuadric(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkQuadricWrap::ptpl))->HasInstance(info[0]))
	{
		VtkQuadricWrap *a0 = ObjectWrap::Unwrap<VtkQuadricWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetQuadric(
			(vtkQuadric *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridSourceWrap::UseDescriptorOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseDescriptorOff();
}

void VtkHyperTreeGridSourceWrap::UseDescriptorOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseDescriptorOn();
}

void VtkHyperTreeGridSourceWrap::UseMaterialMaskOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseMaterialMaskOff();
}

void VtkHyperTreeGridSourceWrap::UseMaterialMaskOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridSourceWrap>(info.Holder());
	vtkHyperTreeGridSource *native = (vtkHyperTreeGridSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseMaterialMaskOn();
}
