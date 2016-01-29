/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPointSetAlgorithmWrap.h"
#include "vtkDeformPointSetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkAlgorithmOutputWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDeformPointSetWrap::ptpl;

VtkDeformPointSetWrap::VtkDeformPointSetWrap()
{ }

VtkDeformPointSetWrap::VtkDeformPointSetWrap(vtkSmartPointer<vtkDeformPointSet> _native)
{ native = _native; }

VtkDeformPointSetWrap::~VtkDeformPointSetWrap()
{ }

void VtkDeformPointSetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDeformPointSet").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DeformPointSet").ToLocalChecked(), ConstructorGetter);
}

void VtkDeformPointSetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDeformPointSetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDeformPointSetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetControlMeshData", GetControlMeshData);
	Nan::SetPrototypeMethod(tpl, "getControlMeshData", GetControlMeshData);

	Nan::SetPrototypeMethod(tpl, "GetInitializeWeights", GetInitializeWeights);
	Nan::SetPrototypeMethod(tpl, "getInitializeWeights", GetInitializeWeights);

	Nan::SetPrototypeMethod(tpl, "InitializeWeightsOff", InitializeWeightsOff);
	Nan::SetPrototypeMethod(tpl, "initializeWeightsOff", InitializeWeightsOff);

	Nan::SetPrototypeMethod(tpl, "InitializeWeightsOn", InitializeWeightsOn);
	Nan::SetPrototypeMethod(tpl, "initializeWeightsOn", InitializeWeightsOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetControlMeshConnection", SetControlMeshConnection);
	Nan::SetPrototypeMethod(tpl, "setControlMeshConnection", SetControlMeshConnection);

	Nan::SetPrototypeMethod(tpl, "SetControlMeshData", SetControlMeshData);
	Nan::SetPrototypeMethod(tpl, "setControlMeshData", SetControlMeshData);

	Nan::SetPrototypeMethod(tpl, "SetInitializeWeights", SetInitializeWeights);
	Nan::SetPrototypeMethod(tpl, "setInitializeWeights", SetInitializeWeights);

	ptpl.Reset( tpl );
}

void VtkDeformPointSetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDeformPointSet> native = vtkSmartPointer<vtkDeformPointSet>::New();
		VtkDeformPointSetWrap* obj = new VtkDeformPointSetWrap(native);
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

void VtkDeformPointSetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDeformPointSetWrap *wrapper = ObjectWrap::Unwrap<VtkDeformPointSetWrap>(info.Holder());
	vtkDeformPointSet *native = (vtkDeformPointSet *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDeformPointSetWrap::GetControlMeshData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDeformPointSetWrap *wrapper = ObjectWrap::Unwrap<VtkDeformPointSetWrap>(info.Holder());
	vtkDeformPointSet *native = (vtkDeformPointSet *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetControlMeshData();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDeformPointSetWrap::GetInitializeWeights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDeformPointSetWrap *wrapper = ObjectWrap::Unwrap<VtkDeformPointSetWrap>(info.Holder());
	vtkDeformPointSet *native = (vtkDeformPointSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInitializeWeights();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDeformPointSetWrap::InitializeWeightsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDeformPointSetWrap *wrapper = ObjectWrap::Unwrap<VtkDeformPointSetWrap>(info.Holder());
	vtkDeformPointSet *native = (vtkDeformPointSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializeWeightsOff();
}

void VtkDeformPointSetWrap::InitializeWeightsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDeformPointSetWrap *wrapper = ObjectWrap::Unwrap<VtkDeformPointSetWrap>(info.Holder());
	vtkDeformPointSet *native = (vtkDeformPointSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializeWeightsOn();
}

void VtkDeformPointSetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDeformPointSetWrap *wrapper = ObjectWrap::Unwrap<VtkDeformPointSetWrap>(info.Holder());
	vtkDeformPointSet *native = (vtkDeformPointSet *)wrapper->native.GetPointer();
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

void VtkDeformPointSetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDeformPointSetWrap *wrapper = ObjectWrap::Unwrap<VtkDeformPointSetWrap>(info.Holder());
	vtkDeformPointSet *native = (vtkDeformPointSet *)wrapper->native.GetPointer();
	vtkDeformPointSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDeformPointSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDeformPointSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDeformPointSetWrap *w = new VtkDeformPointSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDeformPointSetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDeformPointSetWrap *wrapper = ObjectWrap::Unwrap<VtkDeformPointSetWrap>(info.Holder());
	vtkDeformPointSet *native = (vtkDeformPointSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDeformPointSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDeformPointSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDeformPointSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDeformPointSetWrap *w = new VtkDeformPointSetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDeformPointSetWrap::SetControlMeshConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDeformPointSetWrap *wrapper = ObjectWrap::Unwrap<VtkDeformPointSetWrap>(info.Holder());
	vtkDeformPointSet *native = (vtkDeformPointSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetControlMeshConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDeformPointSetWrap::SetControlMeshData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDeformPointSetWrap *wrapper = ObjectWrap::Unwrap<VtkDeformPointSetWrap>(info.Holder());
	vtkDeformPointSet *native = (vtkDeformPointSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetControlMeshData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDeformPointSetWrap::SetInitializeWeights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDeformPointSetWrap *wrapper = ObjectWrap::Unwrap<VtkDeformPointSetWrap>(info.Holder());
	vtkDeformPointSet *native = (vtkDeformPointSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInitializeWeights(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

