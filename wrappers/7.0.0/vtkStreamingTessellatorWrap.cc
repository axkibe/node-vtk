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
Nan::Persistent<v8::FunctionTemplate> VtkStreamingTessellatorWrap::ptpl;

VtkStreamingTessellatorWrap::VtkStreamingTessellatorWrap()
{ }

VtkStreamingTessellatorWrap::VtkStreamingTessellatorWrap(vtkSmartPointer<vtkStreamingTessellator> _native)
{ native = _native; }

VtkStreamingTessellatorWrap::~VtkStreamingTessellatorWrap()
{ }

void VtkStreamingTessellatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStreamingTessellator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StreamingTessellator").ToLocalChecked(), ConstructorGetter);
}

void VtkStreamingTessellatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStreamingTessellatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStreamingTessellatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	ptpl.Reset( tpl );
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
		VtkStreamingTessellatorWrap* obj = new VtkStreamingTessellatorWrap(native);
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
		VtkEdgeSubdivisionCriterionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkEdgeSubdivisionCriterionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEdgeSubdivisionCriterionWrap *w = new VtkEdgeSubdivisionCriterionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStreamingTessellatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info.Holder());
	vtkStreamingTessellator *native = (vtkStreamingTessellator *)wrapper->native.GetPointer();
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
		VtkStreamingTessellatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStreamingTessellatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStreamingTessellatorWrap *w = new VtkStreamingTessellatorWrap();
	w->native = r;
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
			VtkStreamingTessellatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStreamingTessellatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStreamingTessellatorWrap *w = new VtkStreamingTessellatorWrap();
		w->native = r;
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkEdgeSubdivisionCriterionWrap::ptpl))->HasInstance(info[0]))
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

