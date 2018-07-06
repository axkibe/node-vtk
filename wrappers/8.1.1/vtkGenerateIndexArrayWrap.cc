/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataObjectAlgorithmWrap.h"
#include "vtkGenerateIndexArrayWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenerateIndexArrayWrap::ptpl;

VtkGenerateIndexArrayWrap::VtkGenerateIndexArrayWrap()
{ }

VtkGenerateIndexArrayWrap::VtkGenerateIndexArrayWrap(vtkSmartPointer<vtkGenerateIndexArray> _native)
{ native = _native; }

VtkGenerateIndexArrayWrap::~VtkGenerateIndexArrayWrap()
{ }

void VtkGenerateIndexArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenerateIndexArray").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenerateIndexArray").ToLocalChecked(), ConstructorGetter);
}

void VtkGenerateIndexArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenerateIndexArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenerateIndexArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetArrayName", GetArrayName);
	Nan::SetPrototypeMethod(tpl, "getArrayName", GetArrayName);

	Nan::SetPrototypeMethod(tpl, "GetFieldType", GetFieldType);
	Nan::SetPrototypeMethod(tpl, "getFieldType", GetFieldType);

	Nan::SetPrototypeMethod(tpl, "GetPedigreeID", GetPedigreeID);
	Nan::SetPrototypeMethod(tpl, "getPedigreeID", GetPedigreeID);

	Nan::SetPrototypeMethod(tpl, "GetReferenceArrayName", GetReferenceArrayName);
	Nan::SetPrototypeMethod(tpl, "getReferenceArrayName", GetReferenceArrayName);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetArrayName", SetArrayName);
	Nan::SetPrototypeMethod(tpl, "setArrayName", SetArrayName);

	Nan::SetPrototypeMethod(tpl, "SetFieldType", SetFieldType);
	Nan::SetPrototypeMethod(tpl, "setFieldType", SetFieldType);

	Nan::SetPrototypeMethod(tpl, "SetPedigreeID", SetPedigreeID);
	Nan::SetPrototypeMethod(tpl, "setPedigreeID", SetPedigreeID);

	Nan::SetPrototypeMethod(tpl, "SetReferenceArrayName", SetReferenceArrayName);
	Nan::SetPrototypeMethod(tpl, "setReferenceArrayName", SetReferenceArrayName);

#ifdef VTK_NODE_PLUS_VTKGENERATEINDEXARRAYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGENERATEINDEXARRAYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGenerateIndexArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGenerateIndexArray> native = vtkSmartPointer<vtkGenerateIndexArray>::New();
		VtkGenerateIndexArrayWrap* obj = new VtkGenerateIndexArrayWrap(native);
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

void VtkGenerateIndexArrayWrap::GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenerateIndexArrayWrap *wrapper = ObjectWrap::Unwrap<VtkGenerateIndexArrayWrap>(info.Holder());
	vtkGenerateIndexArray *native = (vtkGenerateIndexArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenerateIndexArrayWrap::GetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenerateIndexArrayWrap *wrapper = ObjectWrap::Unwrap<VtkGenerateIndexArrayWrap>(info.Holder());
	vtkGenerateIndexArray *native = (vtkGenerateIndexArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenerateIndexArrayWrap::GetPedigreeID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenerateIndexArrayWrap *wrapper = ObjectWrap::Unwrap<VtkGenerateIndexArrayWrap>(info.Holder());
	vtkGenerateIndexArray *native = (vtkGenerateIndexArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPedigreeID();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenerateIndexArrayWrap::GetReferenceArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenerateIndexArrayWrap *wrapper = ObjectWrap::Unwrap<VtkGenerateIndexArrayWrap>(info.Holder());
	vtkGenerateIndexArray *native = (vtkGenerateIndexArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReferenceArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenerateIndexArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenerateIndexArrayWrap *wrapper = ObjectWrap::Unwrap<VtkGenerateIndexArrayWrap>(info.Holder());
	vtkGenerateIndexArray *native = (vtkGenerateIndexArray *)wrapper->native.GetPointer();
	vtkGenerateIndexArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGenerateIndexArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenerateIndexArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenerateIndexArrayWrap *w = new VtkGenerateIndexArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenerateIndexArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenerateIndexArrayWrap *wrapper = ObjectWrap::Unwrap<VtkGenerateIndexArrayWrap>(info.Holder());
	vtkGenerateIndexArray *native = (vtkGenerateIndexArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkGenerateIndexArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkGenerateIndexArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenerateIndexArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenerateIndexArrayWrap *w = new VtkGenerateIndexArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenerateIndexArrayWrap::SetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenerateIndexArrayWrap *wrapper = ObjectWrap::Unwrap<VtkGenerateIndexArrayWrap>(info.Holder());
	vtkGenerateIndexArray *native = (vtkGenerateIndexArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenerateIndexArrayWrap::SetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenerateIndexArrayWrap *wrapper = ObjectWrap::Unwrap<VtkGenerateIndexArrayWrap>(info.Holder());
	vtkGenerateIndexArray *native = (vtkGenerateIndexArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenerateIndexArrayWrap::SetPedigreeID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenerateIndexArrayWrap *wrapper = ObjectWrap::Unwrap<VtkGenerateIndexArrayWrap>(info.Holder());
	vtkGenerateIndexArray *native = (vtkGenerateIndexArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPedigreeID(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenerateIndexArrayWrap::SetReferenceArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenerateIndexArrayWrap *wrapper = ObjectWrap::Unwrap<VtkGenerateIndexArrayWrap>(info.Holder());
	vtkGenerateIndexArray *native = (vtkGenerateIndexArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReferenceArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

