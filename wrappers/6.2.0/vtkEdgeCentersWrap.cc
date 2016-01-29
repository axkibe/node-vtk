/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkEdgeCentersWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkEdgeCentersWrap::ptpl;

VtkEdgeCentersWrap::VtkEdgeCentersWrap()
{ }

VtkEdgeCentersWrap::VtkEdgeCentersWrap(vtkSmartPointer<vtkEdgeCenters> _native)
{ native = _native; }

VtkEdgeCentersWrap::~VtkEdgeCentersWrap()
{ }

void VtkEdgeCentersWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEdgeCenters").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EdgeCenters").ToLocalChecked(), ConstructorGetter);
}

void VtkEdgeCentersWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEdgeCentersWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEdgeCentersWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	ptpl.Reset( tpl );
}

void VtkEdgeCentersWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkEdgeCenters> native = vtkSmartPointer<vtkEdgeCenters>::New();
		VtkEdgeCentersWrap* obj = new VtkEdgeCentersWrap(native);
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

void VtkEdgeCentersWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeCentersWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeCentersWrap>(info.Holder());
	vtkEdgeCenters *native = (vtkEdgeCenters *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEdgeCentersWrap::GetVertexCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeCentersWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeCentersWrap>(info.Holder());
	vtkEdgeCenters *native = (vtkEdgeCenters *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVertexCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEdgeCentersWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeCentersWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeCentersWrap>(info.Holder());
	vtkEdgeCenters *native = (vtkEdgeCenters *)wrapper->native.GetPointer();
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

void VtkEdgeCentersWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeCentersWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeCentersWrap>(info.Holder());
	vtkEdgeCenters *native = (vtkEdgeCenters *)wrapper->native.GetPointer();
	vtkEdgeCenters * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkEdgeCentersWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkEdgeCentersWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEdgeCentersWrap *w = new VtkEdgeCentersWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEdgeCentersWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeCentersWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeCentersWrap>(info.Holder());
	vtkEdgeCenters *native = (vtkEdgeCenters *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkEdgeCenters * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkEdgeCentersWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkEdgeCentersWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEdgeCentersWrap *w = new VtkEdgeCentersWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEdgeCentersWrap::SetVertexCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeCentersWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeCentersWrap>(info.Holder());
	vtkEdgeCenters *native = (vtkEdgeCenters *)wrapper->native.GetPointer();
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

void VtkEdgeCentersWrap::VertexCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeCentersWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeCentersWrap>(info.Holder());
	vtkEdgeCenters *native = (vtkEdgeCenters *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VertexCellsOff();
}

void VtkEdgeCentersWrap::VertexCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeCentersWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeCentersWrap>(info.Holder());
	vtkEdgeCenters *native = (vtkEdgeCenters *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VertexCellsOn();
}

