/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataReaderWrap.h"
#include "vtkMultiNewickTreeReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiPieceDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMultiNewickTreeReaderWrap::ptpl;

VtkMultiNewickTreeReaderWrap::VtkMultiNewickTreeReaderWrap()
{ }

VtkMultiNewickTreeReaderWrap::VtkMultiNewickTreeReaderWrap(vtkSmartPointer<vtkMultiNewickTreeReader> _native)
{ native = _native; }

VtkMultiNewickTreeReaderWrap::~VtkMultiNewickTreeReaderWrap()
{ }

void VtkMultiNewickTreeReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMultiNewickTreeReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MultiNewickTreeReader").ToLocalChecked(), ConstructorGetter);
}

void VtkMultiNewickTreeReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMultiNewickTreeReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMultiNewickTreeReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutput", SetOutput);
	Nan::SetPrototypeMethod(tpl, "setOutput", SetOutput);

	ptpl.Reset( tpl );
}

void VtkMultiNewickTreeReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMultiNewickTreeReader> native = vtkSmartPointer<vtkMultiNewickTreeReader>::New();
		VtkMultiNewickTreeReaderWrap* obj = new VtkMultiNewickTreeReaderWrap(native);
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

void VtkMultiNewickTreeReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiNewickTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMultiNewickTreeReaderWrap>(info.Holder());
	vtkMultiNewickTreeReader *native = (vtkMultiNewickTreeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMultiNewickTreeReaderWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiNewickTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMultiNewickTreeReaderWrap>(info.Holder());
	vtkMultiNewickTreeReader *native = (vtkMultiNewickTreeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkMultiPieceDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutput(
			info[0]->Int32Value()
		);
			VtkMultiPieceDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMultiPieceDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMultiPieceDataSetWrap *w = new VtkMultiPieceDataSetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkMultiPieceDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
		VtkMultiPieceDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiPieceDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiPieceDataSetWrap *w = new VtkMultiPieceDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMultiNewickTreeReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiNewickTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMultiNewickTreeReaderWrap>(info.Holder());
	vtkMultiNewickTreeReader *native = (vtkMultiNewickTreeReader *)wrapper->native.GetPointer();
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

void VtkMultiNewickTreeReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiNewickTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMultiNewickTreeReaderWrap>(info.Holder());
	vtkMultiNewickTreeReader *native = (vtkMultiNewickTreeReader *)wrapper->native.GetPointer();
	vtkMultiNewickTreeReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMultiNewickTreeReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiNewickTreeReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiNewickTreeReaderWrap *w = new VtkMultiNewickTreeReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMultiNewickTreeReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiNewickTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMultiNewickTreeReaderWrap>(info.Holder());
	vtkMultiNewickTreeReader *native = (vtkMultiNewickTreeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMultiNewickTreeReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMultiNewickTreeReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMultiNewickTreeReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMultiNewickTreeReaderWrap *w = new VtkMultiNewickTreeReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMultiNewickTreeReaderWrap::SetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiNewickTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMultiNewickTreeReaderWrap>(info.Holder());
	vtkMultiNewickTreeReader *native = (vtkMultiNewickTreeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiPieceDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiPieceDataSetWrap *a0 = ObjectWrap::Unwrap<VtkMultiPieceDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutput(
			(vtkMultiPieceDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

