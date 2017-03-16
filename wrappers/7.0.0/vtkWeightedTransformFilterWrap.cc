/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPointSetAlgorithmWrap.h"
#include "vtkWeightedTransformFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAbstractTransformWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkWeightedTransformFilterWrap::ptpl;

VtkWeightedTransformFilterWrap::VtkWeightedTransformFilterWrap()
{ }

VtkWeightedTransformFilterWrap::VtkWeightedTransformFilterWrap(vtkSmartPointer<vtkWeightedTransformFilter> _native)
{ native = _native; }

VtkWeightedTransformFilterWrap::~VtkWeightedTransformFilterWrap()
{ }

void VtkWeightedTransformFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkWeightedTransformFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("WeightedTransformFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkWeightedTransformFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkWeightedTransformFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkWeightedTransformFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddInputValuesOff", AddInputValuesOff);
	Nan::SetPrototypeMethod(tpl, "addInputValuesOff", AddInputValuesOff);

	Nan::SetPrototypeMethod(tpl, "AddInputValuesOn", AddInputValuesOn);
	Nan::SetPrototypeMethod(tpl, "addInputValuesOn", AddInputValuesOn);

	Nan::SetPrototypeMethod(tpl, "GetAddInputValues", GetAddInputValues);
	Nan::SetPrototypeMethod(tpl, "getAddInputValues", GetAddInputValues);

	Nan::SetPrototypeMethod(tpl, "GetCellDataTransformIndexArray", GetCellDataTransformIndexArray);
	Nan::SetPrototypeMethod(tpl, "getCellDataTransformIndexArray", GetCellDataTransformIndexArray);

	Nan::SetPrototypeMethod(tpl, "GetCellDataWeightArray", GetCellDataWeightArray);
	Nan::SetPrototypeMethod(tpl, "getCellDataWeightArray", GetCellDataWeightArray);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMTime", GetMTime);
	Nan::SetPrototypeMethod(tpl, "getMTime", GetMTime);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTransforms", GetNumberOfTransforms);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTransforms", GetNumberOfTransforms);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "GetTransformIndexArray", GetTransformIndexArray);
	Nan::SetPrototypeMethod(tpl, "getTransformIndexArray", GetTransformIndexArray);

	Nan::SetPrototypeMethod(tpl, "GetWeightArray", GetWeightArray);
	Nan::SetPrototypeMethod(tpl, "getWeightArray", GetWeightArray);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAddInputValues", SetAddInputValues);
	Nan::SetPrototypeMethod(tpl, "setAddInputValues", SetAddInputValues);

	Nan::SetPrototypeMethod(tpl, "SetCellDataTransformIndexArray", SetCellDataTransformIndexArray);
	Nan::SetPrototypeMethod(tpl, "setCellDataTransformIndexArray", SetCellDataTransformIndexArray);

	Nan::SetPrototypeMethod(tpl, "SetCellDataWeightArray", SetCellDataWeightArray);
	Nan::SetPrototypeMethod(tpl, "setCellDataWeightArray", SetCellDataWeightArray);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfTransforms", SetNumberOfTransforms);
	Nan::SetPrototypeMethod(tpl, "setNumberOfTransforms", SetNumberOfTransforms);

	Nan::SetPrototypeMethod(tpl, "SetTransform", SetTransform);
	Nan::SetPrototypeMethod(tpl, "setTransform", SetTransform);

	Nan::SetPrototypeMethod(tpl, "SetTransformIndexArray", SetTransformIndexArray);
	Nan::SetPrototypeMethod(tpl, "setTransformIndexArray", SetTransformIndexArray);

	Nan::SetPrototypeMethod(tpl, "SetWeightArray", SetWeightArray);
	Nan::SetPrototypeMethod(tpl, "setWeightArray", SetWeightArray);

#ifdef VTK_NODE_PLUS_VTKWEIGHTEDTRANSFORMFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKWEIGHTEDTRANSFORMFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkWeightedTransformFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkWeightedTransformFilter> native = vtkSmartPointer<vtkWeightedTransformFilter>::New();
		VtkWeightedTransformFilterWrap* obj = new VtkWeightedTransformFilterWrap(native);
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

void VtkWeightedTransformFilterWrap::AddInputValuesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AddInputValuesOff();
}

void VtkWeightedTransformFilterWrap::AddInputValuesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AddInputValuesOn();
}

void VtkWeightedTransformFilterWrap::GetAddInputValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAddInputValues();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWeightedTransformFilterWrap::GetCellDataTransformIndexArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellDataTransformIndexArray();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWeightedTransformFilterWrap::GetCellDataWeightArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellDataWeightArray();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWeightedTransformFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWeightedTransformFilterWrap::GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWeightedTransformFilterWrap::GetNumberOfTransforms(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTransforms();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWeightedTransformFilterWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkAbstractTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetTransform(
			info[0]->Int32Value()
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWeightedTransformFilterWrap::GetTransformIndexArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransformIndexArray();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWeightedTransformFilterWrap::GetWeightArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWeightArray();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWeightedTransformFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
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

void VtkWeightedTransformFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	vtkWeightedTransformFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkWeightedTransformFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkWeightedTransformFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWeightedTransformFilterWrap *w = new VtkWeightedTransformFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWeightedTransformFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkWeightedTransformFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkWeightedTransformFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkWeightedTransformFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkWeightedTransformFilterWrap *w = new VtkWeightedTransformFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWeightedTransformFilterWrap::SetAddInputValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAddInputValues(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWeightedTransformFilterWrap::SetCellDataTransformIndexArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellDataTransformIndexArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWeightedTransformFilterWrap::SetCellDataWeightArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellDataWeightArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWeightedTransformFilterWrap::SetNumberOfTransforms(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfTransforms(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWeightedTransformFilterWrap::SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetTransform(
				(vtkAbstractTransform *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWeightedTransformFilterWrap::SetTransformIndexArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransformIndexArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWeightedTransformFilterWrap::SetWeightArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWeightedTransformFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWeightedTransformFilterWrap>(info.Holder());
	vtkWeightedTransformFilter *native = (vtkWeightedTransformFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWeightArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

