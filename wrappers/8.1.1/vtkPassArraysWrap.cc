/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataObjectAlgorithmWrap.h"
#include "vtkPassArraysWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPassArraysWrap::ptpl;

VtkPassArraysWrap::VtkPassArraysWrap()
{ }

VtkPassArraysWrap::VtkPassArraysWrap(vtkSmartPointer<vtkPassArrays> _native)
{ native = _native; }

VtkPassArraysWrap::~VtkPassArraysWrap()
{ }

void VtkPassArraysWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPassArrays").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PassArrays").ToLocalChecked(), ConstructorGetter);
}

void VtkPassArraysWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPassArraysWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPassArraysWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddArray", AddArray);
	Nan::SetPrototypeMethod(tpl, "addArray", AddArray);

	Nan::SetPrototypeMethod(tpl, "AddCellDataArray", AddCellDataArray);
	Nan::SetPrototypeMethod(tpl, "addCellDataArray", AddCellDataArray);

	Nan::SetPrototypeMethod(tpl, "AddFieldDataArray", AddFieldDataArray);
	Nan::SetPrototypeMethod(tpl, "addFieldDataArray", AddFieldDataArray);

	Nan::SetPrototypeMethod(tpl, "AddFieldType", AddFieldType);
	Nan::SetPrototypeMethod(tpl, "addFieldType", AddFieldType);

	Nan::SetPrototypeMethod(tpl, "AddPointDataArray", AddPointDataArray);
	Nan::SetPrototypeMethod(tpl, "addPointDataArray", AddPointDataArray);

	Nan::SetPrototypeMethod(tpl, "ClearArrays", ClearArrays);
	Nan::SetPrototypeMethod(tpl, "clearArrays", ClearArrays);

	Nan::SetPrototypeMethod(tpl, "ClearCellDataArrays", ClearCellDataArrays);
	Nan::SetPrototypeMethod(tpl, "clearCellDataArrays", ClearCellDataArrays);

	Nan::SetPrototypeMethod(tpl, "ClearFieldDataArrays", ClearFieldDataArrays);
	Nan::SetPrototypeMethod(tpl, "clearFieldDataArrays", ClearFieldDataArrays);

	Nan::SetPrototypeMethod(tpl, "ClearFieldTypes", ClearFieldTypes);
	Nan::SetPrototypeMethod(tpl, "clearFieldTypes", ClearFieldTypes);

	Nan::SetPrototypeMethod(tpl, "ClearPointDataArrays", ClearPointDataArrays);
	Nan::SetPrototypeMethod(tpl, "clearPointDataArrays", ClearPointDataArrays);

	Nan::SetPrototypeMethod(tpl, "GetRemoveArrays", GetRemoveArrays);
	Nan::SetPrototypeMethod(tpl, "getRemoveArrays", GetRemoveArrays);

	Nan::SetPrototypeMethod(tpl, "GetUseFieldTypes", GetUseFieldTypes);
	Nan::SetPrototypeMethod(tpl, "getUseFieldTypes", GetUseFieldTypes);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveArray", RemoveArray);
	Nan::SetPrototypeMethod(tpl, "removeArray", RemoveArray);

	Nan::SetPrototypeMethod(tpl, "RemoveArraysOff", RemoveArraysOff);
	Nan::SetPrototypeMethod(tpl, "removeArraysOff", RemoveArraysOff);

	Nan::SetPrototypeMethod(tpl, "RemoveArraysOn", RemoveArraysOn);
	Nan::SetPrototypeMethod(tpl, "removeArraysOn", RemoveArraysOn);

	Nan::SetPrototypeMethod(tpl, "RemoveCellDataArray", RemoveCellDataArray);
	Nan::SetPrototypeMethod(tpl, "removeCellDataArray", RemoveCellDataArray);

	Nan::SetPrototypeMethod(tpl, "RemoveFieldDataArray", RemoveFieldDataArray);
	Nan::SetPrototypeMethod(tpl, "removeFieldDataArray", RemoveFieldDataArray);

	Nan::SetPrototypeMethod(tpl, "RemovePointDataArray", RemovePointDataArray);
	Nan::SetPrototypeMethod(tpl, "removePointDataArray", RemovePointDataArray);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRemoveArrays", SetRemoveArrays);
	Nan::SetPrototypeMethod(tpl, "setRemoveArrays", SetRemoveArrays);

	Nan::SetPrototypeMethod(tpl, "SetUseFieldTypes", SetUseFieldTypes);
	Nan::SetPrototypeMethod(tpl, "setUseFieldTypes", SetUseFieldTypes);

	Nan::SetPrototypeMethod(tpl, "UseFieldTypesOff", UseFieldTypesOff);
	Nan::SetPrototypeMethod(tpl, "useFieldTypesOff", UseFieldTypesOff);

	Nan::SetPrototypeMethod(tpl, "UseFieldTypesOn", UseFieldTypesOn);
	Nan::SetPrototypeMethod(tpl, "useFieldTypesOn", UseFieldTypesOn);

#ifdef VTK_NODE_PLUS_VTKPASSARRAYSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPASSARRAYSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPassArraysWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPassArrays> native = vtkSmartPointer<vtkPassArrays>::New();
		VtkPassArraysWrap* obj = new VtkPassArraysWrap(native);
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

void VtkPassArraysWrap::AddArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddArray(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassArraysWrap::AddCellDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddCellDataArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassArraysWrap::AddFieldDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddFieldDataArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassArraysWrap::AddFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddFieldType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassArraysWrap::AddPointDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddPointDataArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassArraysWrap::ClearArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearArrays();
}

void VtkPassArraysWrap::ClearCellDataArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearCellDataArrays();
}

void VtkPassArraysWrap::ClearFieldDataArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearFieldDataArrays();
}

void VtkPassArraysWrap::ClearFieldTypes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearFieldTypes();
}

void VtkPassArraysWrap::ClearPointDataArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearPointDataArrays();
}

void VtkPassArraysWrap::GetRemoveArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRemoveArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPassArraysWrap::GetUseFieldTypes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseFieldTypes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPassArraysWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	vtkPassArrays * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPassArraysWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPassArraysWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPassArraysWrap *w = new VtkPassArraysWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPassArraysWrap::RemoveArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->RemoveArray(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassArraysWrap::RemoveArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveArraysOff();
}

void VtkPassArraysWrap::RemoveArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveArraysOn();
}

void VtkPassArraysWrap::RemoveCellDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveCellDataArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassArraysWrap::RemoveFieldDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveFieldDataArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassArraysWrap::RemovePointDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemovePointDataArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassArraysWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPassArrays * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPassArraysWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPassArraysWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPassArraysWrap *w = new VtkPassArraysWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassArraysWrap::SetRemoveArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRemoveArrays(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassArraysWrap::SetUseFieldTypes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseFieldTypes(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassArraysWrap::UseFieldTypesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseFieldTypesOff();
}

void VtkPassArraysWrap::UseFieldTypesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassArraysWrap *wrapper = ObjectWrap::Unwrap<VtkPassArraysWrap>(info.Holder());
	vtkPassArrays *native = (vtkPassArrays *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseFieldTypesOn();
}

