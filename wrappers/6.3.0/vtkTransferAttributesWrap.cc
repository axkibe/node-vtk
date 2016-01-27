/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkTransferAttributesWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTransferAttributesWrap::ptpl;

VtkTransferAttributesWrap::VtkTransferAttributesWrap()
{ }

VtkTransferAttributesWrap::VtkTransferAttributesWrap(vtkSmartPointer<vtkTransferAttributes> _native)
{ native = _native; }

VtkTransferAttributesWrap::~VtkTransferAttributesWrap()
{ }

void VtkTransferAttributesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTransferAttributes").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TransferAttributes").ToLocalChecked(), ConstructorGetter);
}

void VtkTransferAttributesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTransferAttributesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPassInputTypeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTransferAttributesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DirectMappingOff", DirectMappingOff);
	Nan::SetPrototypeMethod(tpl, "directMappingOff", DirectMappingOff);

	Nan::SetPrototypeMethod(tpl, "DirectMappingOn", DirectMappingOn);
	Nan::SetPrototypeMethod(tpl, "directMappingOn", DirectMappingOn);

	Nan::SetPrototypeMethod(tpl, "FillInputPortInformation", FillInputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillInputPortInformation", FillInputPortInformation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSourceArrayName", GetSourceArrayName);
	Nan::SetPrototypeMethod(tpl, "getSourceArrayName", GetSourceArrayName);

	Nan::SetPrototypeMethod(tpl, "GetSourceFieldType", GetSourceFieldType);
	Nan::SetPrototypeMethod(tpl, "getSourceFieldType", GetSourceFieldType);

	Nan::SetPrototypeMethod(tpl, "GetTargetArrayName", GetTargetArrayName);
	Nan::SetPrototypeMethod(tpl, "getTargetArrayName", GetTargetArrayName);

	Nan::SetPrototypeMethod(tpl, "GetTargetFieldType", GetTargetFieldType);
	Nan::SetPrototypeMethod(tpl, "getTargetFieldType", GetTargetFieldType);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSourceArrayName", SetSourceArrayName);
	Nan::SetPrototypeMethod(tpl, "setSourceArrayName", SetSourceArrayName);

	Nan::SetPrototypeMethod(tpl, "SetSourceFieldType", SetSourceFieldType);
	Nan::SetPrototypeMethod(tpl, "setSourceFieldType", SetSourceFieldType);

	Nan::SetPrototypeMethod(tpl, "SetTargetArrayName", SetTargetArrayName);
	Nan::SetPrototypeMethod(tpl, "setTargetArrayName", SetTargetArrayName);

	Nan::SetPrototypeMethod(tpl, "SetTargetFieldType", SetTargetFieldType);
	Nan::SetPrototypeMethod(tpl, "setTargetFieldType", SetTargetFieldType);

	ptpl.Reset( tpl );
}

void VtkTransferAttributesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTransferAttributes> native = vtkSmartPointer<vtkTransferAttributes>::New();
		VtkTransferAttributesWrap* obj = new VtkTransferAttributesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTransferAttributesWrap::DirectMappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DirectMappingOff();
}

void VtkTransferAttributesWrap::DirectMappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DirectMappingOn();
}

void VtkTransferAttributesWrap::FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillInputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransferAttributesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransferAttributesWrap::GetSourceArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSourceArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransferAttributesWrap::GetSourceFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSourceFieldType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransferAttributesWrap::GetTargetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransferAttributesWrap::GetTargetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetFieldType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransferAttributesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
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

void VtkTransferAttributesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	vtkTransferAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTransferAttributesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransferAttributesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransferAttributesWrap *w = new VtkTransferAttributesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransferAttributesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTransferAttributes * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTransferAttributesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTransferAttributesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTransferAttributesWrap *w = new VtkTransferAttributesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransferAttributesWrap::SetSourceArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransferAttributesWrap::SetSourceFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceFieldType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransferAttributesWrap::SetTargetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTargetArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransferAttributesWrap::SetTargetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransferAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkTransferAttributesWrap>(info.Holder());
	vtkTransferAttributes *native = (vtkTransferAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTargetFieldType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

