/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStatisticsAlgorithmWrap.h"
#include "vtkExtractHistogram2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkDataObjectCollectionWrap.h"
#include "vtkMultiBlockDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkExtractHistogram2DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkExtractHistogram2DWrap::ptpl;

VtkExtractHistogram2DWrap::VtkExtractHistogram2DWrap()
{ }

VtkExtractHistogram2DWrap::VtkExtractHistogram2DWrap(vtkSmartPointer<vtkExtractHistogram2D> _native)
{ native = _native; }

VtkExtractHistogram2DWrap::~VtkExtractHistogram2DWrap()
{ }

void VtkExtractHistogram2DWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStatisticsAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStatisticsAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkExtractHistogram2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkExtractHistogram2D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ExtractHistogram2D").ToLocalChecked(),tpl->GetFunction());
}

void VtkExtractHistogram2DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "Aggregate", Aggregate);
	Nan::SetPrototypeMethod(tpl, "aggregate", Aggregate);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximumBinCount", GetMaximumBinCount);
	Nan::SetPrototypeMethod(tpl, "getMaximumBinCount", GetMaximumBinCount);

	Nan::SetPrototypeMethod(tpl, "GetOutputHistogramImage", GetOutputHistogramImage);
	Nan::SetPrototypeMethod(tpl, "getOutputHistogramImage", GetOutputHistogramImage);

	Nan::SetPrototypeMethod(tpl, "GetRowMask", GetRowMask);
	Nan::SetPrototypeMethod(tpl, "getRowMask", GetRowMask);

	Nan::SetPrototypeMethod(tpl, "GetScalarType", GetScalarType);
	Nan::SetPrototypeMethod(tpl, "getScalarType", GetScalarType);

	Nan::SetPrototypeMethod(tpl, "GetSwapColumns", GetSwapColumns);
	Nan::SetPrototypeMethod(tpl, "getSwapColumns", GetSwapColumns);

	Nan::SetPrototypeMethod(tpl, "GetUseCustomHistogramExtents", GetUseCustomHistogramExtents);
	Nan::SetPrototypeMethod(tpl, "getUseCustomHistogramExtents", GetUseCustomHistogramExtents);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComponentsToProcess", SetComponentsToProcess);
	Nan::SetPrototypeMethod(tpl, "setComponentsToProcess", SetComponentsToProcess);

	Nan::SetPrototypeMethod(tpl, "SetCustomHistogramExtents", SetCustomHistogramExtents);
	Nan::SetPrototypeMethod(tpl, "setCustomHistogramExtents", SetCustomHistogramExtents);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfBins", SetNumberOfBins);
	Nan::SetPrototypeMethod(tpl, "setNumberOfBins", SetNumberOfBins);

	Nan::SetPrototypeMethod(tpl, "SetRowMask", SetRowMask);
	Nan::SetPrototypeMethod(tpl, "setRowMask", SetRowMask);

	Nan::SetPrototypeMethod(tpl, "SetScalarType", SetScalarType);
	Nan::SetPrototypeMethod(tpl, "setScalarType", SetScalarType);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToDouble", SetScalarTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToDouble", SetScalarTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToFloat", SetScalarTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToFloat", SetScalarTypeToFloat);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedChar", SetScalarTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedChar", SetScalarTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedInt", SetScalarTypeToUnsignedInt);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedInt", SetScalarTypeToUnsignedInt);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedLong", SetScalarTypeToUnsignedLong);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedLong", SetScalarTypeToUnsignedLong);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedShort", SetScalarTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedShort", SetScalarTypeToUnsignedShort);

	Nan::SetPrototypeMethod(tpl, "SetSwapColumns", SetSwapColumns);
	Nan::SetPrototypeMethod(tpl, "setSwapColumns", SetSwapColumns);

	Nan::SetPrototypeMethod(tpl, "SetUseCustomHistogramExtents", SetUseCustomHistogramExtents);
	Nan::SetPrototypeMethod(tpl, "setUseCustomHistogramExtents", SetUseCustomHistogramExtents);

	Nan::SetPrototypeMethod(tpl, "SwapColumnsOff", SwapColumnsOff);
	Nan::SetPrototypeMethod(tpl, "swapColumnsOff", SwapColumnsOff);

	Nan::SetPrototypeMethod(tpl, "SwapColumnsOn", SwapColumnsOn);
	Nan::SetPrototypeMethod(tpl, "swapColumnsOn", SwapColumnsOn);

	Nan::SetPrototypeMethod(tpl, "UseCustomHistogramExtentsOff", UseCustomHistogramExtentsOff);
	Nan::SetPrototypeMethod(tpl, "useCustomHistogramExtentsOff", UseCustomHistogramExtentsOff);

	Nan::SetPrototypeMethod(tpl, "UseCustomHistogramExtentsOn", UseCustomHistogramExtentsOn);
	Nan::SetPrototypeMethod(tpl, "useCustomHistogramExtentsOn", UseCustomHistogramExtentsOn);

}

void VtkExtractHistogram2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractHistogram2D> native = vtkSmartPointer<vtkExtractHistogram2D>::New();
		VtkExtractHistogram2DWrap* obj = new VtkExtractHistogram2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtractHistogram2DWrap::Aggregate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectCollectionWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectCollectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkMultiBlockDataSetWrap *a1 = ObjectWrap::Unwrap<VtkMultiBlockDataSetWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Aggregate(
				(vtkDataObjectCollection *) a0->native.GetPointer(),
				(vtkMultiBlockDataSet *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractHistogram2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractHistogram2DWrap::GetMaximumBinCount(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumBinCount();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractHistogram2DWrap::GetOutputHistogramImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputHistogramImage();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractHistogram2DWrap::GetRowMask(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRowMask();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDataArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayWrap *w = new VtkDataArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractHistogram2DWrap::GetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractHistogram2DWrap::GetSwapColumns(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSwapColumns();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractHistogram2DWrap::GetUseCustomHistogramExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseCustomHistogramExtents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractHistogram2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
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

void VtkExtractHistogram2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	vtkExtractHistogram2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkExtractHistogram2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractHistogram2DWrap *w = new VtkExtractHistogram2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractHistogram2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractHistogram2D * r;
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
			Nan::New<v8::Function>(VtkExtractHistogram2DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractHistogram2DWrap *w = new VtkExtractHistogram2DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractHistogram2DWrap::SetComponentsToProcess(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetComponentsToProcess(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractHistogram2DWrap::SetCustomHistogramExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetCustomHistogramExtents(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractHistogram2DWrap::SetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetNumberOfBins(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractHistogram2DWrap::SetRowMask(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRowMask(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractHistogram2DWrap::SetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractHistogram2DWrap::SetScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToDouble();
}

void VtkExtractHistogram2DWrap::SetScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToFloat();
}

void VtkExtractHistogram2DWrap::SetScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedChar();
}

void VtkExtractHistogram2DWrap::SetScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedInt();
}

void VtkExtractHistogram2DWrap::SetScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedLong();
}

void VtkExtractHistogram2DWrap::SetScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedShort();
}

void VtkExtractHistogram2DWrap::SetSwapColumns(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSwapColumns(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractHistogram2DWrap::SetUseCustomHistogramExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseCustomHistogramExtents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractHistogram2DWrap::SwapColumnsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SwapColumnsOff();
}

void VtkExtractHistogram2DWrap::SwapColumnsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SwapColumnsOn();
}

void VtkExtractHistogram2DWrap::UseCustomHistogramExtentsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseCustomHistogramExtentsOff();
}

void VtkExtractHistogram2DWrap::UseCustomHistogramExtentsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkExtractHistogram2DWrap>(info.Holder());
	vtkExtractHistogram2D *native = (vtkExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseCustomHistogramExtentsOn();
}

