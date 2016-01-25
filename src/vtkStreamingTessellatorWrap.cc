/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkStreamingTessellatorWrap.h"
#include "vtkEdgeSubdivisionCriterionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkStreamingTessellatorWrap::constructor;

VtkStreamingTessellatorWrap::VtkStreamingTessellatorWrap()
{ }

VtkStreamingTessellatorWrap::VtkStreamingTessellatorWrap(vtkSmartPointer<vtkStreamingTessellator> _native)
{ native = _native; }

VtkStreamingTessellatorWrap::~VtkStreamingTessellatorWrap()
{ }

void VtkStreamingTessellatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkStreamingTessellatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkStreamingTessellator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("StreamingTessellator").ToLocalChecked(),tpl->GetFunction());
}

void VtkStreamingTessellatorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEmbeddingDimension", GetEmbeddingDimension);
	Nan::SetPrototypeMethod(tpl, "getEmbeddingDimension", GetEmbeddingDimension);

	Nan::SetPrototypeMethod(tpl, "GetFieldSize", GetFieldSize);
	Nan::SetPrototypeMethod(tpl, "getFieldSize", GetFieldSize);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfSubdivisions", GetMaximumNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfSubdivisions", GetMaximumNumberOfSubdivisions);

	Nan::SetPrototypeMethod(tpl, "GetSubdivisionAlgorithm", GetSubdivisionAlgorithm);
	Nan::SetPrototypeMethod(tpl, "getSubdivisionAlgorithm", GetSubdivisionAlgorithm);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ResetCounts", ResetCounts);
	Nan::SetPrototypeMethod(tpl, "resetCounts", ResetCounts);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEmbeddingDimension", SetEmbeddingDimension);
	Nan::SetPrototypeMethod(tpl, "setEmbeddingDimension", SetEmbeddingDimension);

	Nan::SetPrototypeMethod(tpl, "SetFieldSize", SetFieldSize);
	Nan::SetPrototypeMethod(tpl, "setFieldSize", SetFieldSize);

	Nan::SetPrototypeMethod(tpl, "SetMaximumNumberOfSubdivisions", SetMaximumNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "setMaximumNumberOfSubdivisions", SetMaximumNumberOfSubdivisions);

	Nan::SetPrototypeMethod(tpl, "SetSubdivisionAlgorithm", SetSubdivisionAlgorithm);
	Nan::SetPrototypeMethod(tpl, "setSubdivisionAlgorithm", SetSubdivisionAlgorithm);

}

void VtkStreamingTessellatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStreamingTessellator> native = vtkSmartPointer<vtkStreamingTessellator>::New();
		VtkStreamingTessellatorWrap* obj = new VtkStreamingTessellatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStreamingTessellatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStreamingTessellatorWrap::GetEmbeddingDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetEmbeddingDimension(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamingTessellatorWrap::GetFieldSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFieldSize(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamingTessellatorWrap::GetMaximumNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfSubdivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamingTessellatorWrap::GetSubdivisionAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
	vtkEdgeSubdivisionCriterion * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubdivisionAlgorithm();
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

void VtkStreamingTessellatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
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

void VtkStreamingTessellatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
	vtkStreamingTessellator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStreamingTessellatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStreamingTessellatorWrap *w = new VtkStreamingTessellatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStreamingTessellatorWrap::ResetCounts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetCounts();
}

void VtkStreamingTessellatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStreamingTessellator * r;
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
			Nan::New<v8::Function>(VtkStreamingTessellatorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStreamingTessellatorWrap *w = new VtkStreamingTessellatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamingTessellatorWrap::SetEmbeddingDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetEmbeddingDimension(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamingTessellatorWrap::SetFieldSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetFieldSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamingTessellatorWrap::SetMaximumNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumNumberOfSubdivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamingTessellatorWrap::SetSubdivisionAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkEdgeSubdivisionCriterionWrap *a0 = ObjectWrap::Unwrap<VtkEdgeSubdivisionCriterionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSubdivisionAlgorithm(
			(vtkEdgeSubdivisionCriterion *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

