/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphAlgorithmWrap.h"
#include "vtkDIMACSGraphReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDIMACSGraphReaderWrap::ptpl;

VtkDIMACSGraphReaderWrap::VtkDIMACSGraphReaderWrap()
{ }

VtkDIMACSGraphReaderWrap::VtkDIMACSGraphReaderWrap(vtkSmartPointer<vtkDIMACSGraphReader> _native)
{ native = _native; }

VtkDIMACSGraphReaderWrap::~VtkDIMACSGraphReaderWrap()
{ }

void VtkDIMACSGraphReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDIMACSGraphReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DIMACSGraphReader").ToLocalChecked(), ConstructorGetter);
}

void VtkDIMACSGraphReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDIMACSGraphReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDIMACSGraphReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdgeAttributeArrayName", GetEdgeAttributeArrayName);
	Nan::SetPrototypeMethod(tpl, "getEdgeAttributeArrayName", GetEdgeAttributeArrayName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetVertexAttributeArrayName", GetVertexAttributeArrayName);
	Nan::SetPrototypeMethod(tpl, "getVertexAttributeArrayName", GetVertexAttributeArrayName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEdgeAttributeArrayName", SetEdgeAttributeArrayName);
	Nan::SetPrototypeMethod(tpl, "setEdgeAttributeArrayName", SetEdgeAttributeArrayName);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetVertexAttributeArrayName", SetVertexAttributeArrayName);
	Nan::SetPrototypeMethod(tpl, "setVertexAttributeArrayName", SetVertexAttributeArrayName);

	ptpl.Reset( tpl );
}

void VtkDIMACSGraphReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDIMACSGraphReader> native = vtkSmartPointer<vtkDIMACSGraphReader>::New();
		VtkDIMACSGraphReaderWrap* obj = new VtkDIMACSGraphReaderWrap(native);
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

void VtkDIMACSGraphReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphReaderWrap>(info.Holder());
	vtkDIMACSGraphReader *native = (vtkDIMACSGraphReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDIMACSGraphReaderWrap::GetEdgeAttributeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphReaderWrap>(info.Holder());
	vtkDIMACSGraphReader *native = (vtkDIMACSGraphReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeAttributeArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDIMACSGraphReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphReaderWrap>(info.Holder());
	vtkDIMACSGraphReader *native = (vtkDIMACSGraphReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDIMACSGraphReaderWrap::GetVertexAttributeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphReaderWrap>(info.Holder());
	vtkDIMACSGraphReader *native = (vtkDIMACSGraphReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVertexAttributeArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDIMACSGraphReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphReaderWrap>(info.Holder());
	vtkDIMACSGraphReader *native = (vtkDIMACSGraphReader *)wrapper->native.GetPointer();
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

void VtkDIMACSGraphReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphReaderWrap>(info.Holder());
	vtkDIMACSGraphReader *native = (vtkDIMACSGraphReader *)wrapper->native.GetPointer();
	vtkDIMACSGraphReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDIMACSGraphReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDIMACSGraphReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDIMACSGraphReaderWrap *w = new VtkDIMACSGraphReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDIMACSGraphReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphReaderWrap>(info.Holder());
	vtkDIMACSGraphReader *native = (vtkDIMACSGraphReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDIMACSGraphReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkDIMACSGraphReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDIMACSGraphReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDIMACSGraphReaderWrap *w = new VtkDIMACSGraphReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDIMACSGraphReaderWrap::SetEdgeAttributeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphReaderWrap>(info.Holder());
	vtkDIMACSGraphReader *native = (vtkDIMACSGraphReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgeAttributeArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDIMACSGraphReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphReaderWrap>(info.Holder());
	vtkDIMACSGraphReader *native = (vtkDIMACSGraphReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDIMACSGraphReaderWrap::SetVertexAttributeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphReaderWrap>(info.Holder());
	vtkDIMACSGraphReader *native = (vtkDIMACSGraphReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVertexAttributeArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

