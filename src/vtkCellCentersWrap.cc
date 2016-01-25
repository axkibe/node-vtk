/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkCellCentersWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCellCentersWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCellCentersWrap::ptpl;

VtkCellCentersWrap::VtkCellCentersWrap()
{ }

VtkCellCentersWrap::VtkCellCentersWrap(vtkSmartPointer<vtkCellCenters> _native)
{ native = _native; }

VtkCellCentersWrap::~VtkCellCentersWrap()
{ }

void VtkCellCentersWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkCellCentersWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkCellCenters").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CellCenters").ToLocalChecked(),tpl->GetFunction());
}

void VtkCellCentersWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetVertexCells", GetVertexCells);
	Nan::SetPrototypeMethod(tpl, "getVertexCells", GetVertexCells);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetVertexCells", SetVertexCells);
	Nan::SetPrototypeMethod(tpl, "setVertexCells", SetVertexCells);

	Nan::SetPrototypeMethod(tpl, "VertexCellsOff", VertexCellsOff);
	Nan::SetPrototypeMethod(tpl, "vertexCellsOff", VertexCellsOff);

	Nan::SetPrototypeMethod(tpl, "VertexCellsOn", VertexCellsOn);
	Nan::SetPrototypeMethod(tpl, "vertexCellsOn", VertexCellsOn);

}

void VtkCellCentersWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellCenters> native = vtkSmartPointer<vtkCellCenters>::New();
		VtkCellCentersWrap* obj = new VtkCellCentersWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCellCentersWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCentersWrap *wrapper = ObjectWrap::Unwrap<VtkCellCentersWrap>(info.Holder());
	vtkCellCenters *native = (vtkCellCenters *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellCentersWrap::GetVertexCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCentersWrap *wrapper = ObjectWrap::Unwrap<VtkCellCentersWrap>(info.Holder());
	vtkCellCenters *native = (vtkCellCenters *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVertexCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellCentersWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCentersWrap *wrapper = ObjectWrap::Unwrap<VtkCellCentersWrap>(info.Holder());
	vtkCellCenters *native = (vtkCellCenters *)wrapper->native.GetPointer();
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

void VtkCellCentersWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCentersWrap *wrapper = ObjectWrap::Unwrap<VtkCellCentersWrap>(info.Holder());
	vtkCellCenters *native = (vtkCellCenters *)wrapper->native.GetPointer();
	vtkCellCenters * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCellCentersWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellCentersWrap *w = new VtkCellCentersWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellCentersWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCentersWrap *wrapper = ObjectWrap::Unwrap<VtkCellCentersWrap>(info.Holder());
	vtkCellCenters *native = (vtkCellCenters *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCellCenters * r;
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
			Nan::New<v8::Function>(VtkCellCentersWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellCentersWrap *w = new VtkCellCentersWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellCentersWrap::SetVertexCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCentersWrap *wrapper = ObjectWrap::Unwrap<VtkCellCentersWrap>(info.Holder());
	vtkCellCenters *native = (vtkCellCenters *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVertexCells(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellCentersWrap::VertexCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCentersWrap *wrapper = ObjectWrap::Unwrap<VtkCellCentersWrap>(info.Holder());
	vtkCellCenters *native = (vtkCellCenters *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VertexCellsOff();
}

void VtkCellCentersWrap::VertexCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCentersWrap *wrapper = ObjectWrap::Unwrap<VtkCellCentersWrap>(info.Holder());
	vtkCellCenters *native = (vtkCellCenters *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VertexCellsOn();
}

