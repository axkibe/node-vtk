/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkSelectionAlgorithmWrap.h"
#include "vtkCellDistanceSelectorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkSelectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCellDistanceSelectorWrap::constructor;

VtkCellDistanceSelectorWrap::VtkCellDistanceSelectorWrap()
{ }

VtkCellDistanceSelectorWrap::VtkCellDistanceSelectorWrap(vtkSmartPointer<vtkCellDistanceSelector> _native)
{ native = _native; }

VtkCellDistanceSelectorWrap::~VtkCellDistanceSelectorWrap()
{ }

void VtkCellDistanceSelectorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkCellDistanceSelectorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkSelectionAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkCellDistanceSelector").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CellDistanceSelector").ToLocalChecked(),tpl->GetFunction());
}

void VtkCellDistanceSelectorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddIntermediateOff", AddIntermediateOff);
	Nan::SetPrototypeMethod(tpl, "addIntermediateOff", AddIntermediateOff);

	Nan::SetPrototypeMethod(tpl, "AddIntermediateOn", AddIntermediateOn);
	Nan::SetPrototypeMethod(tpl, "addIntermediateOn", AddIntermediateOn);

	Nan::SetPrototypeMethod(tpl, "GetAddIntermediate", GetAddIntermediate);
	Nan::SetPrototypeMethod(tpl, "getAddIntermediate", GetAddIntermediate);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDistance", GetDistance);
	Nan::SetPrototypeMethod(tpl, "getDistance", GetDistance);

	Nan::SetPrototypeMethod(tpl, "GetIncludeSeed", GetIncludeSeed);
	Nan::SetPrototypeMethod(tpl, "getIncludeSeed", GetIncludeSeed);

	Nan::SetPrototypeMethod(tpl, "IncludeSeedOff", IncludeSeedOff);
	Nan::SetPrototypeMethod(tpl, "includeSeedOff", IncludeSeedOff);

	Nan::SetPrototypeMethod(tpl, "IncludeSeedOn", IncludeSeedOn);
	Nan::SetPrototypeMethod(tpl, "includeSeedOn", IncludeSeedOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAddIntermediate", SetAddIntermediate);
	Nan::SetPrototypeMethod(tpl, "setAddIntermediate", SetAddIntermediate);

	Nan::SetPrototypeMethod(tpl, "SetDistance", SetDistance);
	Nan::SetPrototypeMethod(tpl, "setDistance", SetDistance);

	Nan::SetPrototypeMethod(tpl, "SetIncludeSeed", SetIncludeSeed);
	Nan::SetPrototypeMethod(tpl, "setIncludeSeed", SetIncludeSeed);

	Nan::SetPrototypeMethod(tpl, "SetInputMesh", SetInputMesh);
	Nan::SetPrototypeMethod(tpl, "setInputMesh", SetInputMesh);

	Nan::SetPrototypeMethod(tpl, "SetInputMeshConnection", SetInputMeshConnection);
	Nan::SetPrototypeMethod(tpl, "setInputMeshConnection", SetInputMeshConnection);

	Nan::SetPrototypeMethod(tpl, "SetInputSelection", SetInputSelection);
	Nan::SetPrototypeMethod(tpl, "setInputSelection", SetInputSelection);

	Nan::SetPrototypeMethod(tpl, "SetInputSelectionConnection", SetInputSelectionConnection);
	Nan::SetPrototypeMethod(tpl, "setInputSelectionConnection", SetInputSelectionConnection);

}

void VtkCellDistanceSelectorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellDistanceSelector> native = vtkSmartPointer<vtkCellDistanceSelector>::New();
		VtkCellDistanceSelectorWrap* obj = new VtkCellDistanceSelectorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCellDistanceSelectorWrap::AddIntermediateOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AddIntermediateOff();
}

void VtkCellDistanceSelectorWrap::AddIntermediateOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AddIntermediateOn();
}

void VtkCellDistanceSelectorWrap::GetAddIntermediate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAddIntermediate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellDistanceSelectorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellDistanceSelectorWrap::GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellDistanceSelectorWrap::GetIncludeSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIncludeSeed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellDistanceSelectorWrap::IncludeSeedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeSeedOff();
}

void VtkCellDistanceSelectorWrap::IncludeSeedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeSeedOn();
}

void VtkCellDistanceSelectorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
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

void VtkCellDistanceSelectorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	vtkCellDistanceSelector * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCellDistanceSelectorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellDistanceSelectorWrap *w = new VtkCellDistanceSelectorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellDistanceSelectorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCellDistanceSelector * r;
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
			Nan::New<v8::Function>(VtkCellDistanceSelectorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellDistanceSelectorWrap *w = new VtkCellDistanceSelectorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellDistanceSelectorWrap::SetAddIntermediate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAddIntermediate(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellDistanceSelectorWrap::SetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDistance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellDistanceSelectorWrap::SetIncludeSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIncludeSeed(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellDistanceSelectorWrap::SetInputMesh(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputMesh(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellDistanceSelectorWrap::SetInputMeshConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputMeshConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellDistanceSelectorWrap::SetInputSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputSelection(
			(vtkSelection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellDistanceSelectorWrap::SetInputSelectionConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDistanceSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkCellDistanceSelectorWrap>(info.Holder());
	vtkCellDistanceSelector *native = (vtkCellDistanceSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputSelectionConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

