/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkMatrixMathFilterWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMatrixMathFilterWrap::ptpl;

VtkMatrixMathFilterWrap::VtkMatrixMathFilterWrap()
{ }

VtkMatrixMathFilterWrap::VtkMatrixMathFilterWrap(vtkSmartPointer<vtkMatrixMathFilter> _native)
{ native = _native; }

VtkMatrixMathFilterWrap::~VtkMatrixMathFilterWrap()
{ }

void VtkMatrixMathFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMatrixMathFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MatrixMathFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkMatrixMathFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMatrixMathFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMatrixMathFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOperation", GetOperation);
	Nan::SetPrototypeMethod(tpl, "getOperation", GetOperation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOperation", SetOperation);
	Nan::SetPrototypeMethod(tpl, "setOperation", SetOperation);

	Nan::SetPrototypeMethod(tpl, "SetOperationToDeterminant", SetOperationToDeterminant);
	Nan::SetPrototypeMethod(tpl, "setOperationToDeterminant", SetOperationToDeterminant);

	Nan::SetPrototypeMethod(tpl, "SetOperationToEigenvalue", SetOperationToEigenvalue);
	Nan::SetPrototypeMethod(tpl, "setOperationToEigenvalue", SetOperationToEigenvalue);

	Nan::SetPrototypeMethod(tpl, "SetOperationToEigenvector", SetOperationToEigenvector);
	Nan::SetPrototypeMethod(tpl, "setOperationToEigenvector", SetOperationToEigenvector);

	Nan::SetPrototypeMethod(tpl, "SetOperationToInverse", SetOperationToInverse);
	Nan::SetPrototypeMethod(tpl, "setOperationToInverse", SetOperationToInverse);

#ifdef VTK_NODE_PLUS_VTKMATRIXMATHFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMATRIXMATHFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMatrixMathFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMatrixMathFilter> native = vtkSmartPointer<vtkMatrixMathFilter>::New();
		VtkMatrixMathFilterWrap* obj = new VtkMatrixMathFilterWrap(native);
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

void VtkMatrixMathFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixMathFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixMathFilterWrap>(info.Holder());
	vtkMatrixMathFilter *native = (vtkMatrixMathFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMatrixMathFilterWrap::GetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixMathFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixMathFilterWrap>(info.Holder());
	vtkMatrixMathFilter *native = (vtkMatrixMathFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMatrixMathFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixMathFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixMathFilterWrap>(info.Holder());
	vtkMatrixMathFilter *native = (vtkMatrixMathFilter *)wrapper->native.GetPointer();
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

void VtkMatrixMathFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixMathFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixMathFilterWrap>(info.Holder());
	vtkMatrixMathFilter *native = (vtkMatrixMathFilter *)wrapper->native.GetPointer();
	vtkMatrixMathFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMatrixMathFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMatrixMathFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrixMathFilterWrap *w = new VtkMatrixMathFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMatrixMathFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixMathFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixMathFilterWrap>(info.Holder());
	vtkMatrixMathFilter *native = (vtkMatrixMathFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMatrixMathFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkMatrixMathFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMatrixMathFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMatrixMathFilterWrap *w = new VtkMatrixMathFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMatrixMathFilterWrap::SetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixMathFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixMathFilterWrap>(info.Holder());
	vtkMatrixMathFilter *native = (vtkMatrixMathFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOperation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMatrixMathFilterWrap::SetOperationToDeterminant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixMathFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixMathFilterWrap>(info.Holder());
	vtkMatrixMathFilter *native = (vtkMatrixMathFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToDeterminant();
}

void VtkMatrixMathFilterWrap::SetOperationToEigenvalue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixMathFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixMathFilterWrap>(info.Holder());
	vtkMatrixMathFilter *native = (vtkMatrixMathFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToEigenvalue();
}

void VtkMatrixMathFilterWrap::SetOperationToEigenvector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixMathFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixMathFilterWrap>(info.Holder());
	vtkMatrixMathFilter *native = (vtkMatrixMathFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToEigenvector();
}

void VtkMatrixMathFilterWrap::SetOperationToInverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixMathFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixMathFilterWrap>(info.Holder());
	vtkMatrixMathFilter *native = (vtkMatrixMathFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToInverse();
}

