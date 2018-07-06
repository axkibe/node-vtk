/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkKMeansDistanceFunctorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAbstractArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkKMeansDistanceFunctorWrap::ptpl;

VtkKMeansDistanceFunctorWrap::VtkKMeansDistanceFunctorWrap()
{ }

VtkKMeansDistanceFunctorWrap::VtkKMeansDistanceFunctorWrap(vtkSmartPointer<vtkKMeansDistanceFunctor> _native)
{ native = _native; }

VtkKMeansDistanceFunctorWrap::~VtkKMeansDistanceFunctorWrap()
{ }

void VtkKMeansDistanceFunctorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkKMeansDistanceFunctor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("KMeansDistanceFunctor").ToLocalChecked(), ConstructorGetter);
}

void VtkKMeansDistanceFunctorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkKMeansDistanceFunctorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkKMeansDistanceFunctorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateCoordinateArray", CreateCoordinateArray);
	Nan::SetPrototypeMethod(tpl, "createCoordinateArray", CreateCoordinateArray);

	Nan::SetPrototypeMethod(tpl, "GetDataType", GetDataType);
	Nan::SetPrototypeMethod(tpl, "getDataType", GetDataType);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKKMEANSDISTANCEFUNCTORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKKMEANSDISTANCEFUNCTORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkKMeansDistanceFunctorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkKMeansDistanceFunctor> native = vtkSmartPointer<vtkKMeansDistanceFunctor>::New();
		VtkKMeansDistanceFunctorWrap* obj = new VtkKMeansDistanceFunctorWrap(native);
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

void VtkKMeansDistanceFunctorWrap::CreateCoordinateArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKMeansDistanceFunctorWrap *wrapper = ObjectWrap::Unwrap<VtkKMeansDistanceFunctorWrap>(info.Holder());
	vtkKMeansDistanceFunctor *native = (vtkKMeansDistanceFunctor *)wrapper->native.GetPointer();
	vtkAbstractArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CreateCoordinateArray();
	VtkAbstractArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractArrayWrap *w = new VtkAbstractArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkKMeansDistanceFunctorWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKMeansDistanceFunctorWrap *wrapper = ObjectWrap::Unwrap<VtkKMeansDistanceFunctorWrap>(info.Holder());
	vtkKMeansDistanceFunctor *native = (vtkKMeansDistanceFunctor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKMeansDistanceFunctorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKMeansDistanceFunctorWrap *wrapper = ObjectWrap::Unwrap<VtkKMeansDistanceFunctorWrap>(info.Holder());
	vtkKMeansDistanceFunctor *native = (vtkKMeansDistanceFunctor *)wrapper->native.GetPointer();
	vtkKMeansDistanceFunctor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkKMeansDistanceFunctorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkKMeansDistanceFunctorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkKMeansDistanceFunctorWrap *w = new VtkKMeansDistanceFunctorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkKMeansDistanceFunctorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKMeansDistanceFunctorWrap *wrapper = ObjectWrap::Unwrap<VtkKMeansDistanceFunctorWrap>(info.Holder());
	vtkKMeansDistanceFunctor *native = (vtkKMeansDistanceFunctor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkKMeansDistanceFunctor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkKMeansDistanceFunctorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkKMeansDistanceFunctorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkKMeansDistanceFunctorWrap *w = new VtkKMeansDistanceFunctorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

