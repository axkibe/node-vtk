/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkBooleanOperationPolyDataFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBooleanOperationPolyDataFilterWrap::ptpl;

VtkBooleanOperationPolyDataFilterWrap::VtkBooleanOperationPolyDataFilterWrap()
{ }

VtkBooleanOperationPolyDataFilterWrap::VtkBooleanOperationPolyDataFilterWrap(vtkSmartPointer<vtkBooleanOperationPolyDataFilter> _native)
{ native = _native; }

VtkBooleanOperationPolyDataFilterWrap::~VtkBooleanOperationPolyDataFilterWrap()
{ }

void VtkBooleanOperationPolyDataFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBooleanOperationPolyDataFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BooleanOperationPolyDataFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkBooleanOperationPolyDataFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBooleanOperationPolyDataFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBooleanOperationPolyDataFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOperation", GetOperation);
	Nan::SetPrototypeMethod(tpl, "getOperation", GetOperation);

	Nan::SetPrototypeMethod(tpl, "GetOperationMaxValue", GetOperationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOperationMaxValue", GetOperationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOperationMinValue", GetOperationMinValue);
	Nan::SetPrototypeMethod(tpl, "getOperationMinValue", GetOperationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetReorientDifferenceCells", GetReorientDifferenceCells);
	Nan::SetPrototypeMethod(tpl, "getReorientDifferenceCells", GetReorientDifferenceCells);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReorientDifferenceCellsOff", ReorientDifferenceCellsOff);
	Nan::SetPrototypeMethod(tpl, "reorientDifferenceCellsOff", ReorientDifferenceCellsOff);

	Nan::SetPrototypeMethod(tpl, "ReorientDifferenceCellsOn", ReorientDifferenceCellsOn);
	Nan::SetPrototypeMethod(tpl, "reorientDifferenceCellsOn", ReorientDifferenceCellsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOperation", SetOperation);
	Nan::SetPrototypeMethod(tpl, "setOperation", SetOperation);

	Nan::SetPrototypeMethod(tpl, "SetOperationToDifference", SetOperationToDifference);
	Nan::SetPrototypeMethod(tpl, "setOperationToDifference", SetOperationToDifference);

	Nan::SetPrototypeMethod(tpl, "SetOperationToIntersection", SetOperationToIntersection);
	Nan::SetPrototypeMethod(tpl, "setOperationToIntersection", SetOperationToIntersection);

	Nan::SetPrototypeMethod(tpl, "SetOperationToUnion", SetOperationToUnion);
	Nan::SetPrototypeMethod(tpl, "setOperationToUnion", SetOperationToUnion);

	Nan::SetPrototypeMethod(tpl, "SetReorientDifferenceCells", SetReorientDifferenceCells);
	Nan::SetPrototypeMethod(tpl, "setReorientDifferenceCells", SetReorientDifferenceCells);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	ptpl.Reset( tpl );
}

void VtkBooleanOperationPolyDataFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBooleanOperationPolyDataFilter> native = vtkSmartPointer<vtkBooleanOperationPolyDataFilter>::New();
		VtkBooleanOperationPolyDataFilterWrap* obj = new VtkBooleanOperationPolyDataFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBooleanOperationPolyDataFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBooleanOperationPolyDataFilterWrap::GetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBooleanOperationPolyDataFilterWrap::GetOperationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBooleanOperationPolyDataFilterWrap::GetOperationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBooleanOperationPolyDataFilterWrap::GetReorientDifferenceCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReorientDifferenceCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBooleanOperationPolyDataFilterWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBooleanOperationPolyDataFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
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

void VtkBooleanOperationPolyDataFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	vtkBooleanOperationPolyDataFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBooleanOperationPolyDataFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBooleanOperationPolyDataFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBooleanOperationPolyDataFilterWrap *w = new VtkBooleanOperationPolyDataFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBooleanOperationPolyDataFilterWrap::ReorientDifferenceCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReorientDifferenceCellsOff();
}

void VtkBooleanOperationPolyDataFilterWrap::ReorientDifferenceCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReorientDifferenceCellsOn();
}

void VtkBooleanOperationPolyDataFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBooleanOperationPolyDataFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBooleanOperationPolyDataFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBooleanOperationPolyDataFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBooleanOperationPolyDataFilterWrap *w = new VtkBooleanOperationPolyDataFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanOperationPolyDataFilterWrap::SetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOperation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanOperationPolyDataFilterWrap::SetOperationToDifference(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToDifference();
}

void VtkBooleanOperationPolyDataFilterWrap::SetOperationToIntersection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToIntersection();
}

void VtkBooleanOperationPolyDataFilterWrap::SetOperationToUnion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToUnion();
}

void VtkBooleanOperationPolyDataFilterWrap::SetReorientDifferenceCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReorientDifferenceCells(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanOperationPolyDataFilterWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanOperationPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanOperationPolyDataFilterWrap>(info.Holder());
	vtkBooleanOperationPolyDataFilter *native = (vtkBooleanOperationPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

