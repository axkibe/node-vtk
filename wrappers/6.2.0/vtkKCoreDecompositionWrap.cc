/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphAlgorithmWrap.h"
#include "vtkKCoreDecompositionWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkKCoreDecompositionWrap::ptpl;

VtkKCoreDecompositionWrap::VtkKCoreDecompositionWrap()
{ }

VtkKCoreDecompositionWrap::VtkKCoreDecompositionWrap(vtkSmartPointer<vtkKCoreDecomposition> _native)
{ native = _native; }

VtkKCoreDecompositionWrap::~VtkKCoreDecompositionWrap()
{ }

void VtkKCoreDecompositionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkKCoreDecomposition").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("KCoreDecomposition").ToLocalChecked(), ConstructorGetter);
}

void VtkKCoreDecompositionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkKCoreDecompositionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkKCoreDecompositionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CheckInputGraphOff", CheckInputGraphOff);
	Nan::SetPrototypeMethod(tpl, "checkInputGraphOff", CheckInputGraphOff);

	Nan::SetPrototypeMethod(tpl, "CheckInputGraphOn", CheckInputGraphOn);
	Nan::SetPrototypeMethod(tpl, "checkInputGraphOn", CheckInputGraphOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutputArrayName", SetOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "setOutputArrayName", SetOutputArrayName);

	Nan::SetPrototypeMethod(tpl, "UseInDegreeNeighborsOff", UseInDegreeNeighborsOff);
	Nan::SetPrototypeMethod(tpl, "useInDegreeNeighborsOff", UseInDegreeNeighborsOff);

	Nan::SetPrototypeMethod(tpl, "UseInDegreeNeighborsOn", UseInDegreeNeighborsOn);
	Nan::SetPrototypeMethod(tpl, "useInDegreeNeighborsOn", UseInDegreeNeighborsOn);

	Nan::SetPrototypeMethod(tpl, "UseOutDegreeNeighborsOff", UseOutDegreeNeighborsOff);
	Nan::SetPrototypeMethod(tpl, "useOutDegreeNeighborsOff", UseOutDegreeNeighborsOff);

	Nan::SetPrototypeMethod(tpl, "UseOutDegreeNeighborsOn", UseOutDegreeNeighborsOn);
	Nan::SetPrototypeMethod(tpl, "useOutDegreeNeighborsOn", UseOutDegreeNeighborsOn);

	ptpl.Reset( tpl );
}

void VtkKCoreDecompositionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkKCoreDecomposition> native = vtkSmartPointer<vtkKCoreDecomposition>::New();
		VtkKCoreDecompositionWrap* obj = new VtkKCoreDecompositionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkKCoreDecompositionWrap::CheckInputGraphOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKCoreDecompositionWrap *wrapper = ObjectWrap::Unwrap<VtkKCoreDecompositionWrap>(info.Holder());
	vtkKCoreDecomposition *native = (vtkKCoreDecomposition *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CheckInputGraphOff();
}

void VtkKCoreDecompositionWrap::CheckInputGraphOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKCoreDecompositionWrap *wrapper = ObjectWrap::Unwrap<VtkKCoreDecompositionWrap>(info.Holder());
	vtkKCoreDecomposition *native = (vtkKCoreDecomposition *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CheckInputGraphOn();
}

void VtkKCoreDecompositionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKCoreDecompositionWrap *wrapper = ObjectWrap::Unwrap<VtkKCoreDecompositionWrap>(info.Holder());
	vtkKCoreDecomposition *native = (vtkKCoreDecomposition *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkKCoreDecompositionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKCoreDecompositionWrap *wrapper = ObjectWrap::Unwrap<VtkKCoreDecompositionWrap>(info.Holder());
	vtkKCoreDecomposition *native = (vtkKCoreDecomposition *)wrapper->native.GetPointer();
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

void VtkKCoreDecompositionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKCoreDecompositionWrap *wrapper = ObjectWrap::Unwrap<VtkKCoreDecompositionWrap>(info.Holder());
	vtkKCoreDecomposition *native = (vtkKCoreDecomposition *)wrapper->native.GetPointer();
	vtkKCoreDecomposition * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkKCoreDecompositionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkKCoreDecompositionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkKCoreDecompositionWrap *w = new VtkKCoreDecompositionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkKCoreDecompositionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKCoreDecompositionWrap *wrapper = ObjectWrap::Unwrap<VtkKCoreDecompositionWrap>(info.Holder());
	vtkKCoreDecomposition *native = (vtkKCoreDecomposition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkKCoreDecomposition * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkKCoreDecompositionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkKCoreDecompositionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkKCoreDecompositionWrap *w = new VtkKCoreDecompositionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKCoreDecompositionWrap::SetOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKCoreDecompositionWrap *wrapper = ObjectWrap::Unwrap<VtkKCoreDecompositionWrap>(info.Holder());
	vtkKCoreDecomposition *native = (vtkKCoreDecomposition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKCoreDecompositionWrap::UseInDegreeNeighborsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKCoreDecompositionWrap *wrapper = ObjectWrap::Unwrap<VtkKCoreDecompositionWrap>(info.Holder());
	vtkKCoreDecomposition *native = (vtkKCoreDecomposition *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseInDegreeNeighborsOff();
}

void VtkKCoreDecompositionWrap::UseInDegreeNeighborsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKCoreDecompositionWrap *wrapper = ObjectWrap::Unwrap<VtkKCoreDecompositionWrap>(info.Holder());
	vtkKCoreDecomposition *native = (vtkKCoreDecomposition *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseInDegreeNeighborsOn();
}

void VtkKCoreDecompositionWrap::UseOutDegreeNeighborsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKCoreDecompositionWrap *wrapper = ObjectWrap::Unwrap<VtkKCoreDecompositionWrap>(info.Holder());
	vtkKCoreDecomposition *native = (vtkKCoreDecomposition *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseOutDegreeNeighborsOff();
}

void VtkKCoreDecompositionWrap::UseOutDegreeNeighborsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKCoreDecompositionWrap *wrapper = ObjectWrap::Unwrap<VtkKCoreDecompositionWrap>(info.Holder());
	vtkKCoreDecomposition *native = (vtkKCoreDecomposition *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseOutDegreeNeighborsOn();
}

