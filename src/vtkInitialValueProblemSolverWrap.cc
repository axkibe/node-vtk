/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkInitialValueProblemSolverWrap.h"
#include "vtkFunctionSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInitialValueProblemSolverWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkInitialValueProblemSolverWrap::ptpl;

VtkInitialValueProblemSolverWrap::VtkInitialValueProblemSolverWrap()
{ }

VtkInitialValueProblemSolverWrap::VtkInitialValueProblemSolverWrap(vtkSmartPointer<vtkInitialValueProblemSolver> _native)
{ native = _native; }

VtkInitialValueProblemSolverWrap::~VtkInitialValueProblemSolverWrap()
{ }

void VtkInitialValueProblemSolverWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkInitialValueProblemSolverWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkInitialValueProblemSolver").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("InitialValueProblemSolver").ToLocalChecked(),tpl->GetFunction());
}

void VtkInitialValueProblemSolverWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFunctionSet", GetFunctionSet);
	Nan::SetPrototypeMethod(tpl, "getFunctionSet", GetFunctionSet);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsAdaptive", IsAdaptive);
	Nan::SetPrototypeMethod(tpl, "isAdaptive", IsAdaptive);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFunctionSet", SetFunctionSet);
	Nan::SetPrototypeMethod(tpl, "setFunctionSet", SetFunctionSet);

}

void VtkInitialValueProblemSolverWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkInitialValueProblemSolverWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInitialValueProblemSolverWrap *wrapper = ObjectWrap::Unwrap<VtkInitialValueProblemSolverWrap>(info.Holder());
	vtkInitialValueProblemSolver *native = (vtkInitialValueProblemSolver *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInitialValueProblemSolverWrap::GetFunctionSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInitialValueProblemSolverWrap *wrapper = ObjectWrap::Unwrap<VtkInitialValueProblemSolverWrap>(info.Holder());
	vtkInitialValueProblemSolver *native = (vtkInitialValueProblemSolver *)wrapper->native.GetPointer();
	vtkFunctionSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFunctionSet();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkFunctionSetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFunctionSetWrap *w = new VtkFunctionSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInitialValueProblemSolverWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInitialValueProblemSolverWrap *wrapper = ObjectWrap::Unwrap<VtkInitialValueProblemSolverWrap>(info.Holder());
	vtkInitialValueProblemSolver *native = (vtkInitialValueProblemSolver *)wrapper->native.GetPointer();
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

void VtkInitialValueProblemSolverWrap::IsAdaptive(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInitialValueProblemSolverWrap *wrapper = ObjectWrap::Unwrap<VtkInitialValueProblemSolverWrap>(info.Holder());
	vtkInitialValueProblemSolver *native = (vtkInitialValueProblemSolver *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsAdaptive();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInitialValueProblemSolverWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInitialValueProblemSolverWrap *wrapper = ObjectWrap::Unwrap<VtkInitialValueProblemSolverWrap>(info.Holder());
	vtkInitialValueProblemSolver *native = (vtkInitialValueProblemSolver *)wrapper->native.GetPointer();
	vtkInitialValueProblemSolver * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInitialValueProblemSolverWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInitialValueProblemSolverWrap *w = new VtkInitialValueProblemSolverWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInitialValueProblemSolverWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInitialValueProblemSolverWrap *wrapper = ObjectWrap::Unwrap<VtkInitialValueProblemSolverWrap>(info.Holder());
	vtkInitialValueProblemSolver *native = (vtkInitialValueProblemSolver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInitialValueProblemSolver * r;
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
			Nan::New<v8::Function>(VtkInitialValueProblemSolverWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInitialValueProblemSolverWrap *w = new VtkInitialValueProblemSolverWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInitialValueProblemSolverWrap::SetFunctionSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInitialValueProblemSolverWrap *wrapper = ObjectWrap::Unwrap<VtkInitialValueProblemSolverWrap>(info.Holder());
	vtkInitialValueProblemSolver *native = (vtkInitialValueProblemSolver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkFunctionSetWrap *a0 = ObjectWrap::Unwrap<VtkFunctionSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFunctionSet(
			(vtkFunctionSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
