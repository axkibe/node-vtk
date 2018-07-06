/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUniformGridAMRWrap.h"
#include "vtkNonOverlappingAMRWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkNonOverlappingAMRWrap::ptpl;

VtkNonOverlappingAMRWrap::VtkNonOverlappingAMRWrap()
{ }

VtkNonOverlappingAMRWrap::VtkNonOverlappingAMRWrap(vtkSmartPointer<vtkNonOverlappingAMR> _native)
{ native = _native; }

VtkNonOverlappingAMRWrap::~VtkNonOverlappingAMRWrap()
{ }

void VtkNonOverlappingAMRWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkNonOverlappingAMR").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("NonOverlappingAMR").ToLocalChecked(), ConstructorGetter);
}

void VtkNonOverlappingAMRWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkNonOverlappingAMRWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUniformGridAMRWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUniformGridAMRWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkNonOverlappingAMRWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKNONOVERLAPPINGAMRWRAP_INITPTPL
	VTK_NODE_PLUS_VTKNONOVERLAPPINGAMRWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkNonOverlappingAMRWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkNonOverlappingAMR> native = vtkSmartPointer<vtkNonOverlappingAMR>::New();
		VtkNonOverlappingAMRWrap* obj = new VtkNonOverlappingAMRWrap(native);
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

void VtkNonOverlappingAMRWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkNonOverlappingAMRWrap>(info.Holder());
	vtkNonOverlappingAMR *native = (vtkNonOverlappingAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkNonOverlappingAMR * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			VtkNonOverlappingAMRWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkNonOverlappingAMRWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkNonOverlappingAMRWrap *w = new VtkNonOverlappingAMRWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		vtkNonOverlappingAMR * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
		VtkNonOverlappingAMRWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkNonOverlappingAMRWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNonOverlappingAMRWrap *w = new VtkNonOverlappingAMRWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNonOverlappingAMRWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkNonOverlappingAMRWrap>(info.Holder());
	vtkNonOverlappingAMR *native = (vtkNonOverlappingAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNonOverlappingAMRWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkNonOverlappingAMRWrap>(info.Holder());
	vtkNonOverlappingAMR *native = (vtkNonOverlappingAMR *)wrapper->native.GetPointer();
	vtkNonOverlappingAMR * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkNonOverlappingAMRWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkNonOverlappingAMRWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNonOverlappingAMRWrap *w = new VtkNonOverlappingAMRWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNonOverlappingAMRWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkNonOverlappingAMRWrap>(info.Holder());
	vtkNonOverlappingAMR *native = (vtkNonOverlappingAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkNonOverlappingAMR * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkNonOverlappingAMRWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkNonOverlappingAMRWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNonOverlappingAMRWrap *w = new VtkNonOverlappingAMRWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

