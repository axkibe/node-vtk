/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDirectedGraphAlgorithmWrap.h"
#include "vtkPolyDataToReebGraphFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkReebGraphWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPolyDataToReebGraphFilterWrap::ptpl;

VtkPolyDataToReebGraphFilterWrap::VtkPolyDataToReebGraphFilterWrap()
{ }

VtkPolyDataToReebGraphFilterWrap::VtkPolyDataToReebGraphFilterWrap(vtkSmartPointer<vtkPolyDataToReebGraphFilter> _native)
{ native = _native; }

VtkPolyDataToReebGraphFilterWrap::~VtkPolyDataToReebGraphFilterWrap()
{ }

void VtkPolyDataToReebGraphFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolyDataToReebGraphFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PolyDataToReebGraphFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkPolyDataToReebGraphFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolyDataToReebGraphFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDirectedGraphAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDirectedGraphAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolyDataToReebGraphFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFieldId", GetFieldId);
	Nan::SetPrototypeMethod(tpl, "getFieldId", GetFieldId);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFieldId", SetFieldId);
	Nan::SetPrototypeMethod(tpl, "setFieldId", SetFieldId);

	ptpl.Reset( tpl );
}

void VtkPolyDataToReebGraphFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolyDataToReebGraphFilter> native = vtkSmartPointer<vtkPolyDataToReebGraphFilter>::New();
		VtkPolyDataToReebGraphFilterWrap* obj = new VtkPolyDataToReebGraphFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPolyDataToReebGraphFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToReebGraphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToReebGraphFilterWrap>(info.Holder());
	vtkPolyDataToReebGraphFilter *native = (vtkPolyDataToReebGraphFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolyDataToReebGraphFilterWrap::GetFieldId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToReebGraphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToReebGraphFilterWrap>(info.Holder());
	vtkPolyDataToReebGraphFilter *native = (vtkPolyDataToReebGraphFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataToReebGraphFilterWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToReebGraphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToReebGraphFilterWrap>(info.Holder());
	vtkPolyDataToReebGraphFilter *native = (vtkPolyDataToReebGraphFilter *)wrapper->native.GetPointer();
	vtkReebGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
		VtkReebGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkReebGraphWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkReebGraphWrap *w = new VtkReebGraphWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataToReebGraphFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToReebGraphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToReebGraphFilterWrap>(info.Holder());
	vtkPolyDataToReebGraphFilter *native = (vtkPolyDataToReebGraphFilter *)wrapper->native.GetPointer();
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

void VtkPolyDataToReebGraphFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToReebGraphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToReebGraphFilterWrap>(info.Holder());
	vtkPolyDataToReebGraphFilter *native = (vtkPolyDataToReebGraphFilter *)wrapper->native.GetPointer();
	vtkPolyDataToReebGraphFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPolyDataToReebGraphFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataToReebGraphFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataToReebGraphFilterWrap *w = new VtkPolyDataToReebGraphFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataToReebGraphFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToReebGraphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToReebGraphFilterWrap>(info.Holder());
	vtkPolyDataToReebGraphFilter *native = (vtkPolyDataToReebGraphFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPolyDataToReebGraphFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPolyDataToReebGraphFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyDataToReebGraphFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataToReebGraphFilterWrap *w = new VtkPolyDataToReebGraphFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataToReebGraphFilterWrap::SetFieldId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToReebGraphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToReebGraphFilterWrap>(info.Holder());
	vtkPolyDataToReebGraphFilter *native = (vtkPolyDataToReebGraphFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldId(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
