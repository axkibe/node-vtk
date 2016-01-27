/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkDataArraySelectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDataArraySelectionWrap::ptpl;

VtkDataArraySelectionWrap::VtkDataArraySelectionWrap()
{ }

VtkDataArraySelectionWrap::VtkDataArraySelectionWrap(vtkSmartPointer<vtkDataArraySelection> _native)
{ native = _native; }

VtkDataArraySelectionWrap::~VtkDataArraySelectionWrap()
{ }

void VtkDataArraySelectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDataArraySelection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DataArraySelection").ToLocalChecked(), ConstructorGetter);
}

void VtkDataArraySelectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDataArraySelectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDataArraySelectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddArray", AddArray);
	Nan::SetPrototypeMethod(tpl, "addArray", AddArray);

	Nan::SetPrototypeMethod(tpl, "ArrayExists", ArrayExists);
	Nan::SetPrototypeMethod(tpl, "arrayExists", ArrayExists);

	Nan::SetPrototypeMethod(tpl, "ArrayIsEnabled", ArrayIsEnabled);
	Nan::SetPrototypeMethod(tpl, "arrayIsEnabled", ArrayIsEnabled);

	Nan::SetPrototypeMethod(tpl, "CopySelections", CopySelections);
	Nan::SetPrototypeMethod(tpl, "copySelections", CopySelections);

	Nan::SetPrototypeMethod(tpl, "DisableAllArrays", DisableAllArrays);
	Nan::SetPrototypeMethod(tpl, "disableAllArrays", DisableAllArrays);

	Nan::SetPrototypeMethod(tpl, "DisableArray", DisableArray);
	Nan::SetPrototypeMethod(tpl, "disableArray", DisableArray);

	Nan::SetPrototypeMethod(tpl, "EnableAllArrays", EnableAllArrays);
	Nan::SetPrototypeMethod(tpl, "enableAllArrays", EnableAllArrays);

	Nan::SetPrototypeMethod(tpl, "EnableArray", EnableArray);
	Nan::SetPrototypeMethod(tpl, "enableArray", EnableArray);

	Nan::SetPrototypeMethod(tpl, "GetArrayIndex", GetArrayIndex);
	Nan::SetPrototypeMethod(tpl, "getArrayIndex", GetArrayIndex);

	Nan::SetPrototypeMethod(tpl, "GetArrayName", GetArrayName);
	Nan::SetPrototypeMethod(tpl, "getArrayName", GetArrayName);

	Nan::SetPrototypeMethod(tpl, "GetArraySetting", GetArraySetting);
	Nan::SetPrototypeMethod(tpl, "getArraySetting", GetArraySetting);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEnabledArrayIndex", GetEnabledArrayIndex);
	Nan::SetPrototypeMethod(tpl, "getEnabledArrayIndex", GetEnabledArrayIndex);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfArrays", GetNumberOfArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfArrays", GetNumberOfArrays);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfArraysEnabled", GetNumberOfArraysEnabled);
	Nan::SetPrototypeMethod(tpl, "getNumberOfArraysEnabled", GetNumberOfArraysEnabled);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllArrays", RemoveAllArrays);
	Nan::SetPrototypeMethod(tpl, "removeAllArrays", RemoveAllArrays);

	Nan::SetPrototypeMethod(tpl, "RemoveArrayByIndex", RemoveArrayByIndex);
	Nan::SetPrototypeMethod(tpl, "removeArrayByIndex", RemoveArrayByIndex);

	Nan::SetPrototypeMethod(tpl, "RemoveArrayByName", RemoveArrayByName);
	Nan::SetPrototypeMethod(tpl, "removeArrayByName", RemoveArrayByName);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkDataArraySelectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDataArraySelection> native = vtkSmartPointer<vtkDataArraySelection>::New();
		VtkDataArraySelectionWrap* obj = new VtkDataArraySelectionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDataArraySelectionWrap::AddArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->AddArray(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArraySelectionWrap::ArrayExists(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->ArrayExists(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArraySelectionWrap::ArrayIsEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->ArrayIsEnabled(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArraySelectionWrap::CopySelections(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArraySelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArraySelectionWrap *a0 = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopySelections(
			(vtkDataArraySelection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArraySelectionWrap::DisableAllArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisableAllArrays();
}

void VtkDataArraySelectionWrap::DisableArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DisableArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArraySelectionWrap::EnableAllArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableAllArrays();
}

void VtkDataArraySelectionWrap::EnableArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->EnableArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArraySelectionWrap::GetArrayIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetArrayIndex(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArraySelectionWrap::GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArraySelectionWrap::GetArraySetting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetArraySetting(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetArraySetting(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArraySelectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataArraySelectionWrap::GetEnabledArrayIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetEnabledArrayIndex(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArraySelectionWrap::GetNumberOfArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataArraySelectionWrap::GetNumberOfArraysEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfArraysEnabled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataArraySelectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
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

void VtkDataArraySelectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	vtkDataArraySelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDataArraySelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArraySelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArraySelectionWrap *w = new VtkDataArraySelectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataArraySelectionWrap::RemoveAllArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllArrays();
}

void VtkDataArraySelectionWrap::RemoveArrayByIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveArrayByIndex(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArraySelectionWrap::RemoveArrayByName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveArrayByName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArraySelectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArraySelectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataArraySelectionWrap>(info.Holder());
	vtkDataArraySelection *native = (vtkDataArraySelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDataArraySelection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDataArraySelectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataArraySelectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataArraySelectionWrap *w = new VtkDataArraySelectionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

