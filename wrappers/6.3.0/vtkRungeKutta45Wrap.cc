/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInitialValueProblemSolverWrap.h"
#include "vtkRungeKutta45Wrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRungeKutta45Wrap::ptpl;

VtkRungeKutta45Wrap::VtkRungeKutta45Wrap()
{ }

VtkRungeKutta45Wrap::VtkRungeKutta45Wrap(vtkSmartPointer<vtkRungeKutta45> _native)
{ native = _native; }

VtkRungeKutta45Wrap::~VtkRungeKutta45Wrap()
{ }

void VtkRungeKutta45Wrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRungeKutta45").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RungeKutta45").ToLocalChecked(), ConstructorGetter);
}

void VtkRungeKutta45Wrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRungeKutta45Wrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInitialValueProblemSolverWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInitialValueProblemSolverWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRungeKutta45Wrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkRungeKutta45Wrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRungeKutta45> native = vtkSmartPointer<vtkRungeKutta45>::New();
		VtkRungeKutta45Wrap* obj = new VtkRungeKutta45Wrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRungeKutta45Wrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRungeKutta45Wrap *wrapper = ObjectWrap::Unwrap<VtkRungeKutta45Wrap>(info.Holder());
	vtkRungeKutta45 *native = (vtkRungeKutta45 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRungeKutta45Wrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRungeKutta45Wrap *wrapper = ObjectWrap::Unwrap<VtkRungeKutta45Wrap>(info.Holder());
	vtkRungeKutta45 *native = (vtkRungeKutta45 *)wrapper->native.GetPointer();
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

void VtkRungeKutta45Wrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRungeKutta45Wrap *wrapper = ObjectWrap::Unwrap<VtkRungeKutta45Wrap>(info.Holder());
	vtkRungeKutta45 *native = (vtkRungeKutta45 *)wrapper->native.GetPointer();
	vtkRungeKutta45 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRungeKutta45Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRungeKutta45Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRungeKutta45Wrap *w = new VtkRungeKutta45Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRungeKutta45Wrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRungeKutta45Wrap *wrapper = ObjectWrap::Unwrap<VtkRungeKutta45Wrap>(info.Holder());
	vtkRungeKutta45 *native = (vtkRungeKutta45 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRungeKutta45 * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRungeKutta45Wrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRungeKutta45Wrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRungeKutta45Wrap *w = new VtkRungeKutta45Wrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

