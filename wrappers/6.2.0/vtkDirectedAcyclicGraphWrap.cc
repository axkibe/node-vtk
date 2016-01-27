/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDirectedGraphWrap.h"
#include "vtkDirectedAcyclicGraphWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDirectedAcyclicGraphWrap::ptpl;

VtkDirectedAcyclicGraphWrap::VtkDirectedAcyclicGraphWrap()
{ }

VtkDirectedAcyclicGraphWrap::VtkDirectedAcyclicGraphWrap(vtkSmartPointer<vtkDirectedAcyclicGraph> _native)
{ native = _native; }

VtkDirectedAcyclicGraphWrap::~VtkDirectedAcyclicGraphWrap()
{ }

void VtkDirectedAcyclicGraphWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDirectedAcyclicGraph").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DirectedAcyclicGraph").ToLocalChecked(), ConstructorGetter);
}

void VtkDirectedAcyclicGraphWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDirectedAcyclicGraphWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDirectedGraphWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDirectedGraphWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDirectedAcyclicGraphWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkDirectedAcyclicGraphWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDirectedAcyclicGraph> native = vtkSmartPointer<vtkDirectedAcyclicGraph>::New();
		VtkDirectedAcyclicGraphWrap* obj = new VtkDirectedAcyclicGraphWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDirectedAcyclicGraphWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectedAcyclicGraphWrap *wrapper = ObjectWrap::Unwrap<VtkDirectedAcyclicGraphWrap>(info.Holder());
	vtkDirectedAcyclicGraph *native = (vtkDirectedAcyclicGraph *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDirectedAcyclicGraphWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectedAcyclicGraphWrap *wrapper = ObjectWrap::Unwrap<VtkDirectedAcyclicGraphWrap>(info.Holder());
	vtkDirectedAcyclicGraph *native = (vtkDirectedAcyclicGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkDirectedAcyclicGraph * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
				VtkDirectedAcyclicGraphWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkDirectedAcyclicGraphWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkDirectedAcyclicGraphWrap *w = new VtkDirectedAcyclicGraphWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkDirectedAcyclicGraph * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
			VtkDirectedAcyclicGraphWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDirectedAcyclicGraphWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDirectedAcyclicGraphWrap *w = new VtkDirectedAcyclicGraphWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDirectedAcyclicGraphWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectedAcyclicGraphWrap *wrapper = ObjectWrap::Unwrap<VtkDirectedAcyclicGraphWrap>(info.Holder());
	vtkDirectedAcyclicGraph *native = (vtkDirectedAcyclicGraph *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDirectedAcyclicGraphWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectedAcyclicGraphWrap *wrapper = ObjectWrap::Unwrap<VtkDirectedAcyclicGraphWrap>(info.Holder());
	vtkDirectedAcyclicGraph *native = (vtkDirectedAcyclicGraph *)wrapper->native.GetPointer();
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

void VtkDirectedAcyclicGraphWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectedAcyclicGraphWrap *wrapper = ObjectWrap::Unwrap<VtkDirectedAcyclicGraphWrap>(info.Holder());
	vtkDirectedAcyclicGraph *native = (vtkDirectedAcyclicGraph *)wrapper->native.GetPointer();
	vtkDirectedAcyclicGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDirectedAcyclicGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDirectedAcyclicGraphWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDirectedAcyclicGraphWrap *w = new VtkDirectedAcyclicGraphWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDirectedAcyclicGraphWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectedAcyclicGraphWrap *wrapper = ObjectWrap::Unwrap<VtkDirectedAcyclicGraphWrap>(info.Holder());
	vtkDirectedAcyclicGraph *native = (vtkDirectedAcyclicGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDirectedAcyclicGraph * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDirectedAcyclicGraphWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDirectedAcyclicGraphWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDirectedAcyclicGraphWrap *w = new VtkDirectedAcyclicGraphWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

