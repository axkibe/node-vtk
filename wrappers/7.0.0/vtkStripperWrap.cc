/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkStripperWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStripperWrap::ptpl;

VtkStripperWrap::VtkStripperWrap()
{ }

VtkStripperWrap::VtkStripperWrap(vtkSmartPointer<vtkStripper> _native)
{ native = _native; }

VtkStripperWrap::~VtkStripperWrap()
{ }

void VtkStripperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStripper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Stripper").ToLocalChecked(), ConstructorGetter);
}

void VtkStripperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStripperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStripperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetJoinContiguousSegments", GetJoinContiguousSegments);
	Nan::SetPrototypeMethod(tpl, "getJoinContiguousSegments", GetJoinContiguousSegments);

	Nan::SetPrototypeMethod(tpl, "GetMaximumLength", GetMaximumLength);
	Nan::SetPrototypeMethod(tpl, "getMaximumLength", GetMaximumLength);

	Nan::SetPrototypeMethod(tpl, "GetMaximumLengthMaxValue", GetMaximumLengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumLengthMaxValue", GetMaximumLengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumLengthMinValue", GetMaximumLengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumLengthMinValue", GetMaximumLengthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPassCellDataAsFieldData", GetPassCellDataAsFieldData);
	Nan::SetPrototypeMethod(tpl, "getPassCellDataAsFieldData", GetPassCellDataAsFieldData);

	Nan::SetPrototypeMethod(tpl, "GetPassThroughCellIds", GetPassThroughCellIds);
	Nan::SetPrototypeMethod(tpl, "getPassThroughCellIds", GetPassThroughCellIds);

	Nan::SetPrototypeMethod(tpl, "GetPassThroughPointIds", GetPassThroughPointIds);
	Nan::SetPrototypeMethod(tpl, "getPassThroughPointIds", GetPassThroughPointIds);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "JoinContiguousSegmentsOff", JoinContiguousSegmentsOff);
	Nan::SetPrototypeMethod(tpl, "joinContiguousSegmentsOff", JoinContiguousSegmentsOff);

	Nan::SetPrototypeMethod(tpl, "JoinContiguousSegmentsOn", JoinContiguousSegmentsOn);
	Nan::SetPrototypeMethod(tpl, "joinContiguousSegmentsOn", JoinContiguousSegmentsOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassCellDataAsFieldDataOff", PassCellDataAsFieldDataOff);
	Nan::SetPrototypeMethod(tpl, "passCellDataAsFieldDataOff", PassCellDataAsFieldDataOff);

	Nan::SetPrototypeMethod(tpl, "PassCellDataAsFieldDataOn", PassCellDataAsFieldDataOn);
	Nan::SetPrototypeMethod(tpl, "passCellDataAsFieldDataOn", PassCellDataAsFieldDataOn);

	Nan::SetPrototypeMethod(tpl, "PassThroughCellIdsOff", PassThroughCellIdsOff);
	Nan::SetPrototypeMethod(tpl, "passThroughCellIdsOff", PassThroughCellIdsOff);

	Nan::SetPrototypeMethod(tpl, "PassThroughCellIdsOn", PassThroughCellIdsOn);
	Nan::SetPrototypeMethod(tpl, "passThroughCellIdsOn", PassThroughCellIdsOn);

	Nan::SetPrototypeMethod(tpl, "PassThroughPointIdsOff", PassThroughPointIdsOff);
	Nan::SetPrototypeMethod(tpl, "passThroughPointIdsOff", PassThroughPointIdsOff);

	Nan::SetPrototypeMethod(tpl, "PassThroughPointIdsOn", PassThroughPointIdsOn);
	Nan::SetPrototypeMethod(tpl, "passThroughPointIdsOn", PassThroughPointIdsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetJoinContiguousSegments", SetJoinContiguousSegments);
	Nan::SetPrototypeMethod(tpl, "setJoinContiguousSegments", SetJoinContiguousSegments);

	Nan::SetPrototypeMethod(tpl, "SetMaximumLength", SetMaximumLength);
	Nan::SetPrototypeMethod(tpl, "setMaximumLength", SetMaximumLength);

	Nan::SetPrototypeMethod(tpl, "SetPassCellDataAsFieldData", SetPassCellDataAsFieldData);
	Nan::SetPrototypeMethod(tpl, "setPassCellDataAsFieldData", SetPassCellDataAsFieldData);

	Nan::SetPrototypeMethod(tpl, "SetPassThroughCellIds", SetPassThroughCellIds);
	Nan::SetPrototypeMethod(tpl, "setPassThroughCellIds", SetPassThroughCellIds);

	Nan::SetPrototypeMethod(tpl, "SetPassThroughPointIds", SetPassThroughPointIds);
	Nan::SetPrototypeMethod(tpl, "setPassThroughPointIds", SetPassThroughPointIds);

	ptpl.Reset( tpl );
}

void VtkStripperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStripper> native = vtkSmartPointer<vtkStripper>::New();
		VtkStripperWrap* obj = new VtkStripperWrap(native);
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

void VtkStripperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStripperWrap::GetJoinContiguousSegments(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetJoinContiguousSegments();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStripperWrap::GetMaximumLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStripperWrap::GetMaximumLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumLengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStripperWrap::GetMaximumLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumLengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStripperWrap::GetPassCellDataAsFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassCellDataAsFieldData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStripperWrap::GetPassThroughCellIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassThroughCellIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStripperWrap::GetPassThroughPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassThroughPointIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStripperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
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

void VtkStripperWrap::JoinContiguousSegmentsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->JoinContiguousSegmentsOff();
}

void VtkStripperWrap::JoinContiguousSegmentsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->JoinContiguousSegmentsOn();
}

void VtkStripperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	vtkStripper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkStripperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStripperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStripperWrap *w = new VtkStripperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStripperWrap::PassCellDataAsFieldDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassCellDataAsFieldDataOff();
}

void VtkStripperWrap::PassCellDataAsFieldDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassCellDataAsFieldDataOn();
}

void VtkStripperWrap::PassThroughCellIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughCellIdsOff();
}

void VtkStripperWrap::PassThroughCellIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughCellIdsOn();
}

void VtkStripperWrap::PassThroughPointIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughPointIdsOff();
}

void VtkStripperWrap::PassThroughPointIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughPointIdsOn();
}

void VtkStripperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStripper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkStripperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStripperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStripperWrap *w = new VtkStripperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStripperWrap::SetJoinContiguousSegments(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetJoinContiguousSegments(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStripperWrap::SetMaximumLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumLength(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStripperWrap::SetPassCellDataAsFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassCellDataAsFieldData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStripperWrap::SetPassThroughCellIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassThroughCellIds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStripperWrap::SetPassThroughPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStripperWrap *wrapper = ObjectWrap::Unwrap<VtkStripperWrap>(info.Holder());
	vtkStripper *native = (vtkStripper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassThroughPointIds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

