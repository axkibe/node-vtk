/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkCellTypesWrap.h"
#include "vtkUnsignedCharArrayWrap.h"
#include "vtkIntArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCellTypesWrap::ptpl;

VtkCellTypesWrap::VtkCellTypesWrap()
{ }

VtkCellTypesWrap::VtkCellTypesWrap(vtkSmartPointer<vtkCellTypes> _native)
{ native = _native; }

VtkCellTypesWrap::~VtkCellTypesWrap()
{ }

void VtkCellTypesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCellTypes").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CellTypes").ToLocalChecked(), ConstructorGetter);
}

void VtkCellTypesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellTypesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellTypesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Allocate", Allocate);
	Nan::SetPrototypeMethod(tpl, "allocate", Allocate);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClassNameFromTypeId", GetClassNameFromTypeId);
	Nan::SetPrototypeMethod(tpl, "getClassNameFromTypeId", GetClassNameFromTypeId);

	Nan::SetPrototypeMethod(tpl, "GetTypeIdFromClassName", GetTypeIdFromClassName);
	Nan::SetPrototypeMethod(tpl, "getTypeIdFromClassName", GetTypeIdFromClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellTypes", SetCellTypes);
	Nan::SetPrototypeMethod(tpl, "setCellTypes", SetCellTypes);

	Nan::SetPrototypeMethod(tpl, "Squeeze", Squeeze);
	Nan::SetPrototypeMethod(tpl, "squeeze", Squeeze);

	ptpl.Reset( tpl );
}

void VtkCellTypesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellTypes> native = vtkSmartPointer<vtkCellTypes>::New();
		VtkCellTypesWrap* obj = new VtkCellTypesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCellTypesWrap::Allocate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypesWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypesWrap>(info.Holder());
	vtkCellTypes *native = (vtkCellTypes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Allocate(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellTypesWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypesWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypesWrap>(info.Holder());
	vtkCellTypes *native = (vtkCellTypes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCellTypesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCellTypesWrap *a0 = ObjectWrap::Unwrap<VtkCellTypesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkCellTypes *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellTypesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypesWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypesWrap>(info.Holder());
	vtkCellTypes *native = (vtkCellTypes *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellTypesWrap::GetClassNameFromTypeId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypesWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypesWrap>(info.Holder());
	vtkCellTypes *native = (vtkCellTypes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetClassNameFromTypeId(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellTypesWrap::GetTypeIdFromClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypesWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypesWrap>(info.Holder());
	vtkCellTypes *native = (vtkCellTypes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetTypeIdFromClassName(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellTypesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypesWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypesWrap>(info.Holder());
	vtkCellTypes *native = (vtkCellTypes *)wrapper->native.GetPointer();
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

void VtkCellTypesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypesWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypesWrap>(info.Holder());
	vtkCellTypes *native = (vtkCellTypes *)wrapper->native.GetPointer();
	vtkCellTypes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCellTypesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellTypesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellTypesWrap *w = new VtkCellTypesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellTypesWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypesWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypesWrap>(info.Holder());
	vtkCellTypes *native = (vtkCellTypes *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkCellTypesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypesWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypesWrap>(info.Holder());
	vtkCellTypes *native = (vtkCellTypes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCellTypes * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCellTypesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellTypesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellTypesWrap *w = new VtkCellTypesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellTypesWrap::SetCellTypes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypesWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypesWrap>(info.Holder());
	vtkCellTypes *native = (vtkCellTypes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkUnsignedCharArrayWrap *a1 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIntArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIntArrayWrap *a2 = ObjectWrap::Unwrap<VtkIntArrayWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetCellTypes(
					info[0]->Int32Value(),
					(vtkUnsignedCharArray *) a1->native.GetPointer(),
					(vtkIntArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellTypesWrap::Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypesWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypesWrap>(info.Holder());
	vtkCellTypes *native = (vtkCellTypes *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Squeeze();
}

