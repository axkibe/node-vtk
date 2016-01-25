/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTableAlgorithmWrap.h"
#include "vtkAdjacencyMatrixToEdgeTableWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAdjacencyMatrixToEdgeTableWrap::constructor;

VtkAdjacencyMatrixToEdgeTableWrap::VtkAdjacencyMatrixToEdgeTableWrap()
{ }

VtkAdjacencyMatrixToEdgeTableWrap::VtkAdjacencyMatrixToEdgeTableWrap(vtkSmartPointer<vtkAdjacencyMatrixToEdgeTable> _native)
{ native = _native; }

VtkAdjacencyMatrixToEdgeTableWrap::~VtkAdjacencyMatrixToEdgeTableWrap()
{ }

void VtkAdjacencyMatrixToEdgeTableWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkAdjacencyMatrixToEdgeTableWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkTableAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkAdjacencyMatrixToEdgeTable").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AdjacencyMatrixToEdgeTable").ToLocalChecked(),tpl->GetFunction());
}

void VtkAdjacencyMatrixToEdgeTableWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMinimumThreshold", GetMinimumThreshold);
	Nan::SetPrototypeMethod(tpl, "getMinimumThreshold", GetMinimumThreshold);

	Nan::SetPrototypeMethod(tpl, "GetValueArrayName", GetValueArrayName);
	Nan::SetPrototypeMethod(tpl, "getValueArrayName", GetValueArrayName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMinimumThreshold", SetMinimumThreshold);
	Nan::SetPrototypeMethod(tpl, "setMinimumThreshold", SetMinimumThreshold);

	Nan::SetPrototypeMethod(tpl, "SetValueArrayName", SetValueArrayName);
	Nan::SetPrototypeMethod(tpl, "setValueArrayName", SetValueArrayName);

}

void VtkAdjacencyMatrixToEdgeTableWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAdjacencyMatrixToEdgeTable> native = vtkSmartPointer<vtkAdjacencyMatrixToEdgeTable>::New();
		VtkAdjacencyMatrixToEdgeTableWrap* obj = new VtkAdjacencyMatrixToEdgeTableWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAdjacencyMatrixToEdgeTableWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAdjacencyMatrixToEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkAdjacencyMatrixToEdgeTableWrap>(info.Holder());
	vtkAdjacencyMatrixToEdgeTable *native = (vtkAdjacencyMatrixToEdgeTable *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAdjacencyMatrixToEdgeTableWrap::GetMinimumThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAdjacencyMatrixToEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkAdjacencyMatrixToEdgeTableWrap>(info.Holder());
	vtkAdjacencyMatrixToEdgeTable *native = (vtkAdjacencyMatrixToEdgeTable *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinimumThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAdjacencyMatrixToEdgeTableWrap::GetValueArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAdjacencyMatrixToEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkAdjacencyMatrixToEdgeTableWrap>(info.Holder());
	vtkAdjacencyMatrixToEdgeTable *native = (vtkAdjacencyMatrixToEdgeTable *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValueArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAdjacencyMatrixToEdgeTableWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAdjacencyMatrixToEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkAdjacencyMatrixToEdgeTableWrap>(info.Holder());
	vtkAdjacencyMatrixToEdgeTable *native = (vtkAdjacencyMatrixToEdgeTable *)wrapper->native.GetPointer();
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

void VtkAdjacencyMatrixToEdgeTableWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAdjacencyMatrixToEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkAdjacencyMatrixToEdgeTableWrap>(info.Holder());
	vtkAdjacencyMatrixToEdgeTable *native = (vtkAdjacencyMatrixToEdgeTable *)wrapper->native.GetPointer();
	vtkAdjacencyMatrixToEdgeTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAdjacencyMatrixToEdgeTableWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAdjacencyMatrixToEdgeTableWrap *w = new VtkAdjacencyMatrixToEdgeTableWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAdjacencyMatrixToEdgeTableWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAdjacencyMatrixToEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkAdjacencyMatrixToEdgeTableWrap>(info.Holder());
	vtkAdjacencyMatrixToEdgeTable *native = (vtkAdjacencyMatrixToEdgeTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAdjacencyMatrixToEdgeTable * r;
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
			Nan::New<v8::Function>(VtkAdjacencyMatrixToEdgeTableWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAdjacencyMatrixToEdgeTableWrap *w = new VtkAdjacencyMatrixToEdgeTableWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAdjacencyMatrixToEdgeTableWrap::SetMinimumThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAdjacencyMatrixToEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkAdjacencyMatrixToEdgeTableWrap>(info.Holder());
	vtkAdjacencyMatrixToEdgeTable *native = (vtkAdjacencyMatrixToEdgeTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinimumThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAdjacencyMatrixToEdgeTableWrap::SetValueArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAdjacencyMatrixToEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkAdjacencyMatrixToEdgeTableWrap>(info.Holder());
	vtkAdjacencyMatrixToEdgeTable *native = (vtkAdjacencyMatrixToEdgeTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetValueArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

