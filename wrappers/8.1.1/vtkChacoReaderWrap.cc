/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkChacoReaderWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkChacoReaderWrap::ptpl;

VtkChacoReaderWrap::VtkChacoReaderWrap()
{ }

VtkChacoReaderWrap::VtkChacoReaderWrap(vtkSmartPointer<vtkChacoReader> _native)
{ native = _native; }

VtkChacoReaderWrap::~VtkChacoReaderWrap()
{ }

void VtkChacoReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkChacoReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ChacoReader").ToLocalChecked(), ConstructorGetter);
}

void VtkChacoReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkChacoReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkChacoReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GenerateEdgeWeightArraysOff", GenerateEdgeWeightArraysOff);
	Nan::SetPrototypeMethod(tpl, "generateEdgeWeightArraysOff", GenerateEdgeWeightArraysOff);

	Nan::SetPrototypeMethod(tpl, "GenerateEdgeWeightArraysOn", GenerateEdgeWeightArraysOn);
	Nan::SetPrototypeMethod(tpl, "generateEdgeWeightArraysOn", GenerateEdgeWeightArraysOn);

	Nan::SetPrototypeMethod(tpl, "GenerateGlobalElementIdArrayOff", GenerateGlobalElementIdArrayOff);
	Nan::SetPrototypeMethod(tpl, "generateGlobalElementIdArrayOff", GenerateGlobalElementIdArrayOff);

	Nan::SetPrototypeMethod(tpl, "GenerateGlobalElementIdArrayOn", GenerateGlobalElementIdArrayOn);
	Nan::SetPrototypeMethod(tpl, "generateGlobalElementIdArrayOn", GenerateGlobalElementIdArrayOn);

	Nan::SetPrototypeMethod(tpl, "GenerateGlobalNodeIdArrayOff", GenerateGlobalNodeIdArrayOff);
	Nan::SetPrototypeMethod(tpl, "generateGlobalNodeIdArrayOff", GenerateGlobalNodeIdArrayOff);

	Nan::SetPrototypeMethod(tpl, "GenerateGlobalNodeIdArrayOn", GenerateGlobalNodeIdArrayOn);
	Nan::SetPrototypeMethod(tpl, "generateGlobalNodeIdArrayOn", GenerateGlobalNodeIdArrayOn);

	Nan::SetPrototypeMethod(tpl, "GenerateVertexWeightArraysOff", GenerateVertexWeightArraysOff);
	Nan::SetPrototypeMethod(tpl, "generateVertexWeightArraysOff", GenerateVertexWeightArraysOff);

	Nan::SetPrototypeMethod(tpl, "GenerateVertexWeightArraysOn", GenerateVertexWeightArraysOn);
	Nan::SetPrototypeMethod(tpl, "generateVertexWeightArraysOn", GenerateVertexWeightArraysOn);

	Nan::SetPrototypeMethod(tpl, "GetBaseName", GetBaseName);
	Nan::SetPrototypeMethod(tpl, "getBaseName", GetBaseName);

	Nan::SetPrototypeMethod(tpl, "GetDimensionality", GetDimensionality);
	Nan::SetPrototypeMethod(tpl, "getDimensionality", GetDimensionality);

	Nan::SetPrototypeMethod(tpl, "GetEdgeWeightArrayName", GetEdgeWeightArrayName);
	Nan::SetPrototypeMethod(tpl, "getEdgeWeightArrayName", GetEdgeWeightArrayName);

	Nan::SetPrototypeMethod(tpl, "GetGenerateEdgeWeightArrays", GetGenerateEdgeWeightArrays);
	Nan::SetPrototypeMethod(tpl, "getGenerateEdgeWeightArrays", GetGenerateEdgeWeightArrays);

	Nan::SetPrototypeMethod(tpl, "GetGenerateGlobalElementIdArray", GetGenerateGlobalElementIdArray);
	Nan::SetPrototypeMethod(tpl, "getGenerateGlobalElementIdArray", GetGenerateGlobalElementIdArray);

	Nan::SetPrototypeMethod(tpl, "GetGenerateGlobalNodeIdArray", GetGenerateGlobalNodeIdArray);
	Nan::SetPrototypeMethod(tpl, "getGenerateGlobalNodeIdArray", GetGenerateGlobalNodeIdArray);

	Nan::SetPrototypeMethod(tpl, "GetGenerateVertexWeightArrays", GetGenerateVertexWeightArrays);
	Nan::SetPrototypeMethod(tpl, "getGenerateVertexWeightArrays", GetGenerateVertexWeightArrays);

	Nan::SetPrototypeMethod(tpl, "GetGlobalElementIdArrayName", GetGlobalElementIdArrayName);
	Nan::SetPrototypeMethod(tpl, "getGlobalElementIdArrayName", GetGlobalElementIdArrayName);

	Nan::SetPrototypeMethod(tpl, "GetGlobalNodeIdArrayName", GetGlobalNodeIdArrayName);
	Nan::SetPrototypeMethod(tpl, "getGlobalNodeIdArrayName", GetGlobalNodeIdArrayName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCellWeightArrays", GetNumberOfCellWeightArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCellWeightArrays", GetNumberOfCellWeightArrays);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfEdgeWeights", GetNumberOfEdgeWeights);
	Nan::SetPrototypeMethod(tpl, "getNumberOfEdgeWeights", GetNumberOfEdgeWeights);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointWeightArrays", GetNumberOfPointWeightArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointWeightArrays", GetNumberOfPointWeightArrays);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfVertexWeights", GetNumberOfVertexWeights);
	Nan::SetPrototypeMethod(tpl, "getNumberOfVertexWeights", GetNumberOfVertexWeights);

	Nan::SetPrototypeMethod(tpl, "GetVertexWeightArrayName", GetVertexWeightArrayName);
	Nan::SetPrototypeMethod(tpl, "getVertexWeightArrayName", GetVertexWeightArrayName);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBaseName", SetBaseName);
	Nan::SetPrototypeMethod(tpl, "setBaseName", SetBaseName);

	Nan::SetPrototypeMethod(tpl, "SetGenerateEdgeWeightArrays", SetGenerateEdgeWeightArrays);
	Nan::SetPrototypeMethod(tpl, "setGenerateEdgeWeightArrays", SetGenerateEdgeWeightArrays);

	Nan::SetPrototypeMethod(tpl, "SetGenerateGlobalElementIdArray", SetGenerateGlobalElementIdArray);
	Nan::SetPrototypeMethod(tpl, "setGenerateGlobalElementIdArray", SetGenerateGlobalElementIdArray);

	Nan::SetPrototypeMethod(tpl, "SetGenerateGlobalNodeIdArray", SetGenerateGlobalNodeIdArray);
	Nan::SetPrototypeMethod(tpl, "setGenerateGlobalNodeIdArray", SetGenerateGlobalNodeIdArray);

	Nan::SetPrototypeMethod(tpl, "SetGenerateVertexWeightArrays", SetGenerateVertexWeightArrays);
	Nan::SetPrototypeMethod(tpl, "setGenerateVertexWeightArrays", SetGenerateVertexWeightArrays);

#ifdef VTK_NODE_PLUS_VTKCHACOREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCHACOREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkChacoReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkChacoReader> native = vtkSmartPointer<vtkChacoReader>::New();
		VtkChacoReaderWrap* obj = new VtkChacoReaderWrap(native);
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

void VtkChacoReaderWrap::GenerateEdgeWeightArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateEdgeWeightArraysOff();
}

void VtkChacoReaderWrap::GenerateEdgeWeightArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateEdgeWeightArraysOn();
}

void VtkChacoReaderWrap::GenerateGlobalElementIdArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateGlobalElementIdArrayOff();
}

void VtkChacoReaderWrap::GenerateGlobalElementIdArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateGlobalElementIdArrayOn();
}

void VtkChacoReaderWrap::GenerateGlobalNodeIdArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateGlobalNodeIdArrayOff();
}

void VtkChacoReaderWrap::GenerateGlobalNodeIdArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateGlobalNodeIdArrayOn();
}

void VtkChacoReaderWrap::GenerateVertexWeightArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateVertexWeightArraysOff();
}

void VtkChacoReaderWrap::GenerateVertexWeightArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateVertexWeightArraysOn();
}

void VtkChacoReaderWrap::GetBaseName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBaseName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkChacoReaderWrap::GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionality();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChacoReaderWrap::GetEdgeWeightArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetEdgeWeightArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChacoReaderWrap::GetGenerateEdgeWeightArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateEdgeWeightArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChacoReaderWrap::GetGenerateGlobalElementIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateGlobalElementIdArray();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChacoReaderWrap::GetGenerateGlobalNodeIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateGlobalNodeIdArray();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChacoReaderWrap::GetGenerateVertexWeightArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateVertexWeightArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChacoReaderWrap::GetGlobalElementIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlobalElementIdArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkChacoReaderWrap::GetGlobalNodeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlobalNodeIdArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkChacoReaderWrap::GetNumberOfCellWeightArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellWeightArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChacoReaderWrap::GetNumberOfEdgeWeights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfEdgeWeights();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChacoReaderWrap::GetNumberOfPointWeightArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointWeightArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChacoReaderWrap::GetNumberOfVertexWeights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfVertexWeights();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChacoReaderWrap::GetVertexWeightArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVertexWeightArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChacoReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	vtkChacoReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkChacoReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkChacoReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChacoReaderWrap *w = new VtkChacoReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChacoReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkChacoReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkChacoReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkChacoReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkChacoReaderWrap *w = new VtkChacoReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChacoReaderWrap::SetBaseName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBaseName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChacoReaderWrap::SetGenerateEdgeWeightArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateEdgeWeightArrays(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChacoReaderWrap::SetGenerateGlobalElementIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateGlobalElementIdArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChacoReaderWrap::SetGenerateGlobalNodeIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateGlobalNodeIdArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChacoReaderWrap::SetGenerateVertexWeightArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChacoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkChacoReaderWrap>(info.Holder());
	vtkChacoReader *native = (vtkChacoReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateVertexWeightArrays(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

