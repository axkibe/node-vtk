/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkSortFileNamesWrap.h"
#include "vtkStringArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSortFileNamesWrap::ptpl;

VtkSortFileNamesWrap::VtkSortFileNamesWrap()
{ }

VtkSortFileNamesWrap::VtkSortFileNamesWrap(vtkSmartPointer<vtkSortFileNames> _native)
{ native = _native; }

VtkSortFileNamesWrap::~VtkSortFileNamesWrap()
{ }

void VtkSortFileNamesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSortFileNames").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SortFileNames").ToLocalChecked(), ConstructorGetter);
}

void VtkSortFileNamesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSortFileNamesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSortFileNamesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileNames", GetFileNames);
	Nan::SetPrototypeMethod(tpl, "getFileNames", GetFileNames);

	Nan::SetPrototypeMethod(tpl, "GetGrouping", GetGrouping);
	Nan::SetPrototypeMethod(tpl, "getGrouping", GetGrouping);

	Nan::SetPrototypeMethod(tpl, "GetIgnoreCase", GetIgnoreCase);
	Nan::SetPrototypeMethod(tpl, "getIgnoreCase", GetIgnoreCase);

	Nan::SetPrototypeMethod(tpl, "GetInputFileNames", GetInputFileNames);
	Nan::SetPrototypeMethod(tpl, "getInputFileNames", GetInputFileNames);

	Nan::SetPrototypeMethod(tpl, "GetNthGroup", GetNthGroup);
	Nan::SetPrototypeMethod(tpl, "getNthGroup", GetNthGroup);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfGroups", GetNumberOfGroups);
	Nan::SetPrototypeMethod(tpl, "getNumberOfGroups", GetNumberOfGroups);

	Nan::SetPrototypeMethod(tpl, "GetNumericSort", GetNumericSort);
	Nan::SetPrototypeMethod(tpl, "getNumericSort", GetNumericSort);

	Nan::SetPrototypeMethod(tpl, "GetSkipDirectories", GetSkipDirectories);
	Nan::SetPrototypeMethod(tpl, "getSkipDirectories", GetSkipDirectories);

	Nan::SetPrototypeMethod(tpl, "GroupingOff", GroupingOff);
	Nan::SetPrototypeMethod(tpl, "groupingOff", GroupingOff);

	Nan::SetPrototypeMethod(tpl, "GroupingOn", GroupingOn);
	Nan::SetPrototypeMethod(tpl, "groupingOn", GroupingOn);

	Nan::SetPrototypeMethod(tpl, "IgnoreCaseOff", IgnoreCaseOff);
	Nan::SetPrototypeMethod(tpl, "ignoreCaseOff", IgnoreCaseOff);

	Nan::SetPrototypeMethod(tpl, "IgnoreCaseOn", IgnoreCaseOn);
	Nan::SetPrototypeMethod(tpl, "ignoreCaseOn", IgnoreCaseOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NumericSortOff", NumericSortOff);
	Nan::SetPrototypeMethod(tpl, "numericSortOff", NumericSortOff);

	Nan::SetPrototypeMethod(tpl, "NumericSortOn", NumericSortOn);
	Nan::SetPrototypeMethod(tpl, "numericSortOn", NumericSortOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGrouping", SetGrouping);
	Nan::SetPrototypeMethod(tpl, "setGrouping", SetGrouping);

	Nan::SetPrototypeMethod(tpl, "SetIgnoreCase", SetIgnoreCase);
	Nan::SetPrototypeMethod(tpl, "setIgnoreCase", SetIgnoreCase);

	Nan::SetPrototypeMethod(tpl, "SetInputFileNames", SetInputFileNames);
	Nan::SetPrototypeMethod(tpl, "setInputFileNames", SetInputFileNames);

	Nan::SetPrototypeMethod(tpl, "SetNumericSort", SetNumericSort);
	Nan::SetPrototypeMethod(tpl, "setNumericSort", SetNumericSort);

	Nan::SetPrototypeMethod(tpl, "SetSkipDirectories", SetSkipDirectories);
	Nan::SetPrototypeMethod(tpl, "setSkipDirectories", SetSkipDirectories);

	Nan::SetPrototypeMethod(tpl, "SkipDirectoriesOff", SkipDirectoriesOff);
	Nan::SetPrototypeMethod(tpl, "skipDirectoriesOff", SkipDirectoriesOff);

	Nan::SetPrototypeMethod(tpl, "SkipDirectoriesOn", SkipDirectoriesOn);
	Nan::SetPrototypeMethod(tpl, "skipDirectoriesOn", SkipDirectoriesOn);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkSortFileNamesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSortFileNames> native = vtkSmartPointer<vtkSortFileNames>::New();
		VtkSortFileNamesWrap* obj = new VtkSortFileNamesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSortFileNamesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSortFileNamesWrap::GetFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileNames();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSortFileNamesWrap::GetGrouping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGrouping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSortFileNamesWrap::GetIgnoreCase(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIgnoreCase();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSortFileNamesWrap::GetInputFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputFileNames();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSortFileNamesWrap::GetNthGroup(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkStringArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNthGroup(
			info[0]->Int32Value()
		);
			VtkStringArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStringArrayWrap *w = new VtkStringArrayWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSortFileNamesWrap::GetNumberOfGroups(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfGroups();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSortFileNamesWrap::GetNumericSort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumericSort();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSortFileNamesWrap::GetSkipDirectories(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSkipDirectories();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSortFileNamesWrap::GroupingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GroupingOff();
}

void VtkSortFileNamesWrap::GroupingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GroupingOn();
}

void VtkSortFileNamesWrap::IgnoreCaseOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IgnoreCaseOff();
}

void VtkSortFileNamesWrap::IgnoreCaseOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IgnoreCaseOn();
}

void VtkSortFileNamesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
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

void VtkSortFileNamesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	vtkSortFileNames * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSortFileNamesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSortFileNamesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSortFileNamesWrap *w = new VtkSortFileNamesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSortFileNamesWrap::NumericSortOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NumericSortOff();
}

void VtkSortFileNamesWrap::NumericSortOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NumericSortOn();
}

void VtkSortFileNamesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSortFileNames * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSortFileNamesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSortFileNamesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSortFileNamesWrap *w = new VtkSortFileNamesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSortFileNamesWrap::SetGrouping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGrouping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSortFileNamesWrap::SetIgnoreCase(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIgnoreCase(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSortFileNamesWrap::SetInputFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStringArrayWrap *a0 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputFileNames(
			(vtkStringArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSortFileNamesWrap::SetNumericSort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumericSort(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSortFileNamesWrap::SetSkipDirectories(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSkipDirectories(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSortFileNamesWrap::SkipDirectoriesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SkipDirectoriesOff();
}

void VtkSortFileNamesWrap::SkipDirectoriesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SkipDirectoriesOn();
}

void VtkSortFileNamesWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSortFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkSortFileNamesWrap>(info.Holder());
	vtkSortFileNames *native = (vtkSortFileNames *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

