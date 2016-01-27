/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAlgorithmWrap.h"
#include "vtkMNITransformWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAbstractTransformWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMNITransformWriterWrap::ptpl;

VtkMNITransformWriterWrap::VtkMNITransformWriterWrap()
{ }

VtkMNITransformWriterWrap::VtkMNITransformWriterWrap(vtkSmartPointer<vtkMNITransformWriter> _native)
{ native = _native; }

VtkMNITransformWriterWrap::~VtkMNITransformWriterWrap()
{ }

void VtkMNITransformWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMNITransformWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MNITransformWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkMNITransformWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMNITransformWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMNITransformWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddTransform", AddTransform);
	Nan::SetPrototypeMethod(tpl, "addTransform", AddTransform);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComments", GetComments);
	Nan::SetPrototypeMethod(tpl, "getComments", GetComments);

	Nan::SetPrototypeMethod(tpl, "GetDescriptiveName", GetDescriptiveName);
	Nan::SetPrototypeMethod(tpl, "getDescriptiveName", GetDescriptiveName);

	Nan::SetPrototypeMethod(tpl, "GetFileExtensions", GetFileExtensions);
	Nan::SetPrototypeMethod(tpl, "getFileExtensions", GetFileExtensions);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTransforms", GetNumberOfTransforms);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTransforms", GetNumberOfTransforms);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComments", SetComments);
	Nan::SetPrototypeMethod(tpl, "setComments", SetComments);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetTransform", SetTransform);
	Nan::SetPrototypeMethod(tpl, "setTransform", SetTransform);

	Nan::SetPrototypeMethod(tpl, "Write", Write);
	Nan::SetPrototypeMethod(tpl, "write", Write);

	ptpl.Reset( tpl );
}

void VtkMNITransformWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMNITransformWriter> native = vtkSmartPointer<vtkMNITransformWriter>::New();
		VtkMNITransformWriterWrap* obj = new VtkMNITransformWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMNITransformWriterWrap::AddTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddTransform(
			(vtkAbstractTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITransformWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMNITransformWriterWrap::GetComments(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComments();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMNITransformWriterWrap::GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescriptiveName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMNITransformWriterWrap::GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileExtensions();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMNITransformWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMNITransformWriterWrap::GetNumberOfTransforms(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTransforms();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMNITransformWriterWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransform();
		VtkAbstractTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMNITransformWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
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

void VtkMNITransformWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	vtkMNITransformWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMNITransformWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMNITransformWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMNITransformWriterWrap *w = new VtkMNITransformWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMNITransformWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMNITransformWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMNITransformWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMNITransformWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMNITransformWriterWrap *w = new VtkMNITransformWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITransformWriterWrap::SetComments(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComments(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITransformWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
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

void VtkMNITransformWriterWrap::SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransform(
			(vtkAbstractTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITransformWriterWrap::Write(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITransformWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITransformWriterWrap>(info.Holder());
	vtkMNITransformWriter *native = (vtkMNITransformWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Write();
}

