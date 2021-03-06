/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkStatisticsAlgorithmWrap.h"
#include "vtkPairwiseExtractHistogram2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkExtractHistogram2DWrap.h"
#include "vtkDataObjectCollectionWrap.h"
#include "vtkMultiBlockDataSetWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPairwiseExtractHistogram2DWrap::ptpl;

VtkPairwiseExtractHistogram2DWrap::VtkPairwiseExtractHistogram2DWrap()
{ }

VtkPairwiseExtractHistogram2DWrap::VtkPairwiseExtractHistogram2DWrap(vtkSmartPointer<vtkPairwiseExtractHistogram2D> _native)
{ native = _native; }

VtkPairwiseExtractHistogram2DWrap::~VtkPairwiseExtractHistogram2DWrap()
{ }

void VtkPairwiseExtractHistogram2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPairwiseExtractHistogram2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PairwiseExtractHistogram2D").ToLocalChecked(), ConstructorGetter);
}

void VtkPairwiseExtractHistogram2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPairwiseExtractHistogram2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStatisticsAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStatisticsAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPairwiseExtractHistogram2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Aggregate", Aggregate);
	Nan::SetPrototypeMethod(tpl, "aggregate", Aggregate);

	Nan::SetPrototypeMethod(tpl, "GetBinWidth", GetBinWidth);
	Nan::SetPrototypeMethod(tpl, "getBinWidth", GetBinWidth);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHistogramFilter", GetHistogramFilter);
	Nan::SetPrototypeMethod(tpl, "getHistogramFilter", GetHistogramFilter);

	Nan::SetPrototypeMethod(tpl, "GetMaximumBinCount", GetMaximumBinCount);
	Nan::SetPrototypeMethod(tpl, "getMaximumBinCount", GetMaximumBinCount);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfBins", GetNumberOfBins);
	Nan::SetPrototypeMethod(tpl, "getNumberOfBins", GetNumberOfBins);

	Nan::SetPrototypeMethod(tpl, "GetOutputHistogramImage", GetOutputHistogramImage);
	Nan::SetPrototypeMethod(tpl, "getOutputHistogramImage", GetOutputHistogramImage);

	Nan::SetPrototypeMethod(tpl, "GetScalarType", GetScalarType);
	Nan::SetPrototypeMethod(tpl, "getScalarType", GetScalarType);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCustomColumnRange", SetCustomColumnRange);
	Nan::SetPrototypeMethod(tpl, "setCustomColumnRange", SetCustomColumnRange);

	Nan::SetPrototypeMethod(tpl, "SetCustomColumnRangeByIndex", SetCustomColumnRangeByIndex);
	Nan::SetPrototypeMethod(tpl, "setCustomColumnRangeByIndex", SetCustomColumnRangeByIndex);

	Nan::SetPrototypeMethod(tpl, "SetCustomColumnRangeIndex", SetCustomColumnRangeIndex);
	Nan::SetPrototypeMethod(tpl, "setCustomColumnRangeIndex", SetCustomColumnRangeIndex);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfBins", SetNumberOfBins);
	Nan::SetPrototypeMethod(tpl, "setNumberOfBins", SetNumberOfBins);

	Nan::SetPrototypeMethod(tpl, "SetScalarType", SetScalarType);
	Nan::SetPrototypeMethod(tpl, "setScalarType", SetScalarType);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedChar", SetScalarTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedChar", SetScalarTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedInt", SetScalarTypeToUnsignedInt);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedInt", SetScalarTypeToUnsignedInt);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedLong", SetScalarTypeToUnsignedLong);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedLong", SetScalarTypeToUnsignedLong);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedShort", SetScalarTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedShort", SetScalarTypeToUnsignedShort);

#ifdef VTK_NODE_PLUS_VTKPAIRWISEEXTRACTHISTOGRAM2DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPAIRWISEEXTRACTHISTOGRAM2DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPairwiseExtractHistogram2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPairwiseExtractHistogram2D> native = vtkSmartPointer<vtkPairwiseExtractHistogram2D>::New();
		VtkPairwiseExtractHistogram2DWrap* obj = new VtkPairwiseExtractHistogram2DWrap(native);
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

void VtkPairwiseExtractHistogram2DWrap::Aggregate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectCollectionWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectCollectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkMultiBlockDataSetWrap::ptpl))->HasInstance(info[1]))
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

void VtkPairwiseExtractHistogram2DWrap::GetBinWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetBinWidth(
				info[0]->Int32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetBinWidth(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPairwiseExtractHistogram2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPairwiseExtractHistogram2DWrap::GetHistogramFilter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkExtractHistogram2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetHistogramFilter(
			info[0]->Int32Value()
		);
		VtkExtractHistogram2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractHistogram2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractHistogram2DWrap *w = new VtkExtractHistogram2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPairwiseExtractHistogram2DWrap::GetMaximumBinCount(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetMaximumBinCount(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumBinCount();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPairwiseExtractHistogram2DWrap::GetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfBins();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkPairwiseExtractHistogram2DWrap::GetOutputHistogramImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkImageData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutputHistogramImage(
			info[0]->Int32Value()
		);
		VtkImageDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageDataWrap *w = new VtkImageDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPairwiseExtractHistogram2DWrap::GetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPairwiseExtractHistogram2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
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

void VtkPairwiseExtractHistogram2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	vtkPairwiseExtractHistogram2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPairwiseExtractHistogram2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPairwiseExtractHistogram2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPairwiseExtractHistogram2DWrap *w = new VtkPairwiseExtractHistogram2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPairwiseExtractHistogram2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPairwiseExtractHistogram2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkPairwiseExtractHistogram2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPairwiseExtractHistogram2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPairwiseExtractHistogram2DWrap *w = new VtkPairwiseExtractHistogram2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPairwiseExtractHistogram2DWrap::SetCustomColumnRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetCustomColumnRange(
				info[0]->Int32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetCustomColumnRange(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetCustomColumnRange(
					info[0]->Int32Value(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPairwiseExtractHistogram2DWrap::SetCustomColumnRangeByIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetCustomColumnRangeByIndex(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPairwiseExtractHistogram2DWrap::SetCustomColumnRangeIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCustomColumnRangeIndex(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPairwiseExtractHistogram2DWrap::SetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfBins(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfBins(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkPairwiseExtractHistogram2DWrap::SetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
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

void VtkPairwiseExtractHistogram2DWrap::SetScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedChar();
}

void VtkPairwiseExtractHistogram2DWrap::SetScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedInt();
}

void VtkPairwiseExtractHistogram2DWrap::SetScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedLong();
}

void VtkPairwiseExtractHistogram2DWrap::SetScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPairwiseExtractHistogram2D *native = (vtkPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedShort();
}

