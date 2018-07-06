/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkDataSetTriangleFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDataSetTriangleFilterWrap::ptpl;

VtkDataSetTriangleFilterWrap::VtkDataSetTriangleFilterWrap()
{ }

VtkDataSetTriangleFilterWrap::VtkDataSetTriangleFilterWrap(vtkSmartPointer<vtkDataSetTriangleFilter> _native)
{ native = _native; }

VtkDataSetTriangleFilterWrap::~VtkDataSetTriangleFilterWrap()
{ }

void VtkDataSetTriangleFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDataSetTriangleFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DataSetTriangleFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkDataSetTriangleFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDataSetTriangleFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDataSetTriangleFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetTetrahedraOnly", GetTetrahedraOnly);
	Nan::SetPrototypeMethod(tpl, "getTetrahedraOnly", GetTetrahedraOnly);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTetrahedraOnly", SetTetrahedraOnly);
	Nan::SetPrototypeMethod(tpl, "setTetrahedraOnly", SetTetrahedraOnly);

	Nan::SetPrototypeMethod(tpl, "TetrahedraOnlyOff", TetrahedraOnlyOff);
	Nan::SetPrototypeMethod(tpl, "tetrahedraOnlyOff", TetrahedraOnlyOff);

	Nan::SetPrototypeMethod(tpl, "TetrahedraOnlyOn", TetrahedraOnlyOn);
	Nan::SetPrototypeMethod(tpl, "tetrahedraOnlyOn", TetrahedraOnlyOn);

#ifdef VTK_NODE_PLUS_VTKDATASETTRIANGLEFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDATASETTRIANGLEFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDataSetTriangleFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDataSetTriangleFilter> native = vtkSmartPointer<vtkDataSetTriangleFilter>::New();
		VtkDataSetTriangleFilterWrap* obj = new VtkDataSetTriangleFilterWrap(native);
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

void VtkDataSetTriangleFilterWrap::GetTetrahedraOnly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTetrahedraOnly();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataSetTriangleFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
	vtkDataSetTriangleFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDataSetTriangleFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetTriangleFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetTriangleFilterWrap *w = new VtkDataSetTriangleFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetTriangleFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkDataSetTriangleFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkDataSetTriangleFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataSetTriangleFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetTriangleFilterWrap *w = new VtkDataSetTriangleFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetTriangleFilterWrap::SetTetrahedraOnly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTetrahedraOnly(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetTriangleFilterWrap::TetrahedraOnlyOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TetrahedraOnlyOff();
}

void VtkDataSetTriangleFilterWrap::TetrahedraOnlyOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TetrahedraOnlyOn();
}

