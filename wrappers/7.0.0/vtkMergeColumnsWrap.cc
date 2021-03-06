/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkTableAlgorithmWrap.h"
#include "vtkMergeColumnsWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMergeColumnsWrap::ptpl;

VtkMergeColumnsWrap::VtkMergeColumnsWrap()
{ }

VtkMergeColumnsWrap::VtkMergeColumnsWrap(vtkSmartPointer<vtkMergeColumns> _native)
{ native = _native; }

VtkMergeColumnsWrap::~VtkMergeColumnsWrap()
{ }

void VtkMergeColumnsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMergeColumns").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MergeColumns").ToLocalChecked(), ConstructorGetter);
}

void VtkMergeColumnsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMergeColumnsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMergeColumnsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMergedColumnName", GetMergedColumnName);
	Nan::SetPrototypeMethod(tpl, "getMergedColumnName", GetMergedColumnName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMergedColumnName", SetMergedColumnName);
	Nan::SetPrototypeMethod(tpl, "setMergedColumnName", SetMergedColumnName);

#ifdef VTK_NODE_PLUS_VTKMERGECOLUMNSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMERGECOLUMNSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMergeColumnsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMergeColumns> native = vtkSmartPointer<vtkMergeColumns>::New();
		VtkMergeColumnsWrap* obj = new VtkMergeColumnsWrap(native);
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

void VtkMergeColumnsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeColumnsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeColumnsWrap>(info.Holder());
	vtkMergeColumns *native = (vtkMergeColumns *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMergeColumnsWrap::GetMergedColumnName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeColumnsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeColumnsWrap>(info.Holder());
	vtkMergeColumns *native = (vtkMergeColumns *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergedColumnName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMergeColumnsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeColumnsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeColumnsWrap>(info.Holder());
	vtkMergeColumns *native = (vtkMergeColumns *)wrapper->native.GetPointer();
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

void VtkMergeColumnsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeColumnsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeColumnsWrap>(info.Holder());
	vtkMergeColumns *native = (vtkMergeColumns *)wrapper->native.GetPointer();
	vtkMergeColumns * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMergeColumnsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMergeColumnsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMergeColumnsWrap *w = new VtkMergeColumnsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMergeColumnsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeColumnsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeColumnsWrap>(info.Holder());
	vtkMergeColumns *native = (vtkMergeColumns *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMergeColumns * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkMergeColumnsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMergeColumnsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMergeColumnsWrap *w = new VtkMergeColumnsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeColumnsWrap::SetMergedColumnName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeColumnsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeColumnsWrap>(info.Holder());
	vtkMergeColumns *native = (vtkMergeColumns *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMergedColumnName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

