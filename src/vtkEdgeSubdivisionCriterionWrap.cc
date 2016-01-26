/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkEdgeSubdivisionCriterionWrap.h"
#include "vtkStreamingTessellatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkEdgeSubdivisionCriterionWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkEdgeSubdivisionCriterionWrap::ptpl;

VtkEdgeSubdivisionCriterionWrap::VtkEdgeSubdivisionCriterionWrap()
{ }

VtkEdgeSubdivisionCriterionWrap::VtkEdgeSubdivisionCriterionWrap(vtkSmartPointer<vtkEdgeSubdivisionCriterion> _native)
{ native = _native; }

VtkEdgeSubdivisionCriterionWrap::~VtkEdgeSubdivisionCriterionWrap()
{ }

void VtkEdgeSubdivisionCriterionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEdgeSubdivisionCriterion").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EdgeSubdivisionCriterion").ToLocalChecked(), ConstructorGetter);
}

void VtkEdgeSubdivisionCriterionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEdgeSubdivisionCriterionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEdgeSubdivisionCriterionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFields", GetNumberOfFields);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFields", GetNumberOfFields);

	Nan::SetPrototypeMethod(tpl, "GetOutputField", GetOutputField);
	Nan::SetPrototypeMethod(tpl, "getOutputField", GetOutputField);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassField", PassField);
	Nan::SetPrototypeMethod(tpl, "passField", PassField);

	Nan::SetPrototypeMethod(tpl, "ResetFieldList", ResetFieldList);
	Nan::SetPrototypeMethod(tpl, "resetFieldList", ResetFieldList);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkEdgeSubdivisionCriterionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkEdgeSubdivisionCriterionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeSubdivisionCriterionWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeSubdivisionCriterionWrap>(info.Holder());
	vtkEdgeSubdivisionCriterion *native = (vtkEdgeSubdivisionCriterion *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEdgeSubdivisionCriterionWrap::GetNumberOfFields(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeSubdivisionCriterionWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeSubdivisionCriterionWrap>(info.Holder());
	vtkEdgeSubdivisionCriterion *native = (vtkEdgeSubdivisionCriterion *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFields();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEdgeSubdivisionCriterionWrap::GetOutputField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeSubdivisionCriterionWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeSubdivisionCriterionWrap>(info.Holder());
	vtkEdgeSubdivisionCriterion *native = (vtkEdgeSubdivisionCriterion *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutputField(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEdgeSubdivisionCriterionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeSubdivisionCriterionWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeSubdivisionCriterionWrap>(info.Holder());
	vtkEdgeSubdivisionCriterion *native = (vtkEdgeSubdivisionCriterion *)wrapper->native.GetPointer();
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

void VtkEdgeSubdivisionCriterionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeSubdivisionCriterionWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeSubdivisionCriterionWrap>(info.Holder());
	vtkEdgeSubdivisionCriterion *native = (vtkEdgeSubdivisionCriterion *)wrapper->native.GetPointer();
	vtkEdgeSubdivisionCriterion * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkEdgeSubdivisionCriterionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkEdgeSubdivisionCriterionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEdgeSubdivisionCriterionWrap *w = new VtkEdgeSubdivisionCriterionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEdgeSubdivisionCriterionWrap::PassField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeSubdivisionCriterionWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeSubdivisionCriterionWrap>(info.Holder());
	vtkEdgeSubdivisionCriterion *native = (vtkEdgeSubdivisionCriterion *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkStreamingTessellatorWrap::ptpl))->HasInstance(info[2]))
			{
				VtkStreamingTessellatorWrap *a2 = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info[2]->ToObject());
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->PassField(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					(vtkStreamingTessellator *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEdgeSubdivisionCriterionWrap::ResetFieldList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeSubdivisionCriterionWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeSubdivisionCriterionWrap>(info.Holder());
	vtkEdgeSubdivisionCriterion *native = (vtkEdgeSubdivisionCriterion *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetFieldList();
}

void VtkEdgeSubdivisionCriterionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeSubdivisionCriterionWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeSubdivisionCriterionWrap>(info.Holder());
	vtkEdgeSubdivisionCriterion *native = (vtkEdgeSubdivisionCriterion *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkEdgeSubdivisionCriterion * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkEdgeSubdivisionCriterionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkEdgeSubdivisionCriterionWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEdgeSubdivisionCriterionWrap *w = new VtkEdgeSubdivisionCriterionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

