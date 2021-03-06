/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkCellTypeSourceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCellTypeSourceWrap::ptpl;

VtkCellTypeSourceWrap::VtkCellTypeSourceWrap()
{ }

VtkCellTypeSourceWrap::VtkCellTypeSourceWrap(vtkSmartPointer<vtkCellTypeSource> _native)
{ native = _native; }

VtkCellTypeSourceWrap::~VtkCellTypeSourceWrap()
{ }

void VtkCellTypeSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCellTypeSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CellTypeSource").ToLocalChecked(), ConstructorGetter);
}

void VtkCellTypeSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellTypeSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellTypeSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CompleteQuadraticSimplicialElementsOff", CompleteQuadraticSimplicialElementsOff);
	Nan::SetPrototypeMethod(tpl, "completeQuadraticSimplicialElementsOff", CompleteQuadraticSimplicialElementsOff);

	Nan::SetPrototypeMethod(tpl, "CompleteQuadraticSimplicialElementsOn", CompleteQuadraticSimplicialElementsOn);
	Nan::SetPrototypeMethod(tpl, "completeQuadraticSimplicialElementsOn", CompleteQuadraticSimplicialElementsOn);

	Nan::SetPrototypeMethod(tpl, "GetBlocksDimensions", GetBlocksDimensions);
	Nan::SetPrototypeMethod(tpl, "getBlocksDimensions", GetBlocksDimensions);

	Nan::SetPrototypeMethod(tpl, "GetCellDimension", GetCellDimension);
	Nan::SetPrototypeMethod(tpl, "getCellDimension", GetCellDimension);

	Nan::SetPrototypeMethod(tpl, "GetCellOrder", GetCellOrder);
	Nan::SetPrototypeMethod(tpl, "getCellOrder", GetCellOrder);

	Nan::SetPrototypeMethod(tpl, "GetCellType", GetCellType);
	Nan::SetPrototypeMethod(tpl, "getCellType", GetCellType);

	Nan::SetPrototypeMethod(tpl, "GetCompleteQuadraticSimplicialElements", GetCompleteQuadraticSimplicialElements);
	Nan::SetPrototypeMethod(tpl, "getCompleteQuadraticSimplicialElements", GetCompleteQuadraticSimplicialElements);

	Nan::SetPrototypeMethod(tpl, "GetOutputPrecision", GetOutputPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPrecision", GetOutputPrecision);

	Nan::SetPrototypeMethod(tpl, "GetOutputPrecisionMaxValue", GetOutputPrecisionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOutputPrecisionMaxValue", GetOutputPrecisionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPrecisionMinValue", GetOutputPrecisionMinValue);
	Nan::SetPrototypeMethod(tpl, "getOutputPrecisionMinValue", GetOutputPrecisionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPolynomialFieldOrder", GetPolynomialFieldOrder);
	Nan::SetPrototypeMethod(tpl, "getPolynomialFieldOrder", GetPolynomialFieldOrder);

	Nan::SetPrototypeMethod(tpl, "GetPolynomialFieldOrderMaxValue", GetPolynomialFieldOrderMaxValue);
	Nan::SetPrototypeMethod(tpl, "getPolynomialFieldOrderMaxValue", GetPolynomialFieldOrderMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetPolynomialFieldOrderMinValue", GetPolynomialFieldOrderMinValue);
	Nan::SetPrototypeMethod(tpl, "getPolynomialFieldOrderMinValue", GetPolynomialFieldOrderMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBlocksDimensions", SetBlocksDimensions);
	Nan::SetPrototypeMethod(tpl, "setBlocksDimensions", SetBlocksDimensions);

	Nan::SetPrototypeMethod(tpl, "SetCellOrder", SetCellOrder);
	Nan::SetPrototypeMethod(tpl, "setCellOrder", SetCellOrder);

	Nan::SetPrototypeMethod(tpl, "SetCellType", SetCellType);
	Nan::SetPrototypeMethod(tpl, "setCellType", SetCellType);

	Nan::SetPrototypeMethod(tpl, "SetCompleteQuadraticSimplicialElements", SetCompleteQuadraticSimplicialElements);
	Nan::SetPrototypeMethod(tpl, "setCompleteQuadraticSimplicialElements", SetCompleteQuadraticSimplicialElements);

	Nan::SetPrototypeMethod(tpl, "SetOutputPrecision", SetOutputPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPrecision", SetOutputPrecision);

	Nan::SetPrototypeMethod(tpl, "SetPolynomialFieldOrder", SetPolynomialFieldOrder);
	Nan::SetPrototypeMethod(tpl, "setPolynomialFieldOrder", SetPolynomialFieldOrder);

#ifdef VTK_NODE_PLUS_VTKCELLTYPESOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCELLTYPESOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCellTypeSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellTypeSource> native = vtkSmartPointer<vtkCellTypeSource>::New();
		VtkCellTypeSourceWrap* obj = new VtkCellTypeSourceWrap(native);
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

void VtkCellTypeSourceWrap::CompleteQuadraticSimplicialElementsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CompleteQuadraticSimplicialElementsOff();
}

void VtkCellTypeSourceWrap::CompleteQuadraticSimplicialElementsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CompleteQuadraticSimplicialElementsOn();
}

void VtkCellTypeSourceWrap::GetBlocksDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBlocksDimensions();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkCellTypeSourceWrap::GetCellDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellTypeSourceWrap::GetCellOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellOrder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellTypeSourceWrap::GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellTypeSourceWrap::GetCompleteQuadraticSimplicialElements(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompleteQuadraticSimplicialElements();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellTypeSourceWrap::GetOutputPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellTypeSourceWrap::GetOutputPrecisionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPrecisionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellTypeSourceWrap::GetOutputPrecisionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPrecisionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellTypeSourceWrap::GetPolynomialFieldOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolynomialFieldOrder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellTypeSourceWrap::GetPolynomialFieldOrderMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolynomialFieldOrderMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellTypeSourceWrap::GetPolynomialFieldOrderMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolynomialFieldOrderMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellTypeSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	vtkCellTypeSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCellTypeSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellTypeSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellTypeSourceWrap *w = new VtkCellTypeSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellTypeSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCellTypeSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkCellTypeSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellTypeSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellTypeSourceWrap *w = new VtkCellTypeSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellTypeSourceWrap::SetBlocksDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetBlocksDimensions(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellTypeSourceWrap::SetCellOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellOrder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellTypeSourceWrap::SetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellTypeSourceWrap::SetCompleteQuadraticSimplicialElements(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompleteQuadraticSimplicialElements(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellTypeSourceWrap::SetOutputPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellTypeSourceWrap::SetPolynomialFieldOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTypeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCellTypeSourceWrap>(info.Holder());
	vtkCellTypeSource *native = (vtkCellTypeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPolynomialFieldOrder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

