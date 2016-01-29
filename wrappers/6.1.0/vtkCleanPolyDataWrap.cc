/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkCleanPolyDataWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCleanPolyDataWrap::ptpl;

VtkCleanPolyDataWrap::VtkCleanPolyDataWrap()
{ }

VtkCleanPolyDataWrap::VtkCleanPolyDataWrap(vtkSmartPointer<vtkCleanPolyData> _native)
{ native = _native; }

VtkCleanPolyDataWrap::~VtkCleanPolyDataWrap()
{ }

void VtkCleanPolyDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCleanPolyData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CleanPolyData").ToLocalChecked(), ConstructorGetter);
}

void VtkCleanPolyDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCleanPolyDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCleanPolyDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ConvertLinesToPointsOff", ConvertLinesToPointsOff);
	Nan::SetPrototypeMethod(tpl, "convertLinesToPointsOff", ConvertLinesToPointsOff);

	Nan::SetPrototypeMethod(tpl, "ConvertLinesToPointsOn", ConvertLinesToPointsOn);
	Nan::SetPrototypeMethod(tpl, "convertLinesToPointsOn", ConvertLinesToPointsOn);

	Nan::SetPrototypeMethod(tpl, "ConvertPolysToLinesOff", ConvertPolysToLinesOff);
	Nan::SetPrototypeMethod(tpl, "convertPolysToLinesOff", ConvertPolysToLinesOff);

	Nan::SetPrototypeMethod(tpl, "ConvertPolysToLinesOn", ConvertPolysToLinesOn);
	Nan::SetPrototypeMethod(tpl, "convertPolysToLinesOn", ConvertPolysToLinesOn);

	Nan::SetPrototypeMethod(tpl, "ConvertStripsToPolysOff", ConvertStripsToPolysOff);
	Nan::SetPrototypeMethod(tpl, "convertStripsToPolysOff", ConvertStripsToPolysOff);

	Nan::SetPrototypeMethod(tpl, "ConvertStripsToPolysOn", ConvertStripsToPolysOn);
	Nan::SetPrototypeMethod(tpl, "convertStripsToPolysOn", ConvertStripsToPolysOn);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLocator", CreateDefaultLocator);
	Nan::SetPrototypeMethod(tpl, "createDefaultLocator", CreateDefaultLocator);

	Nan::SetPrototypeMethod(tpl, "GetAbsoluteTolerance", GetAbsoluteTolerance);
	Nan::SetPrototypeMethod(tpl, "getAbsoluteTolerance", GetAbsoluteTolerance);

	Nan::SetPrototypeMethod(tpl, "GetAbsoluteToleranceMaxValue", GetAbsoluteToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAbsoluteToleranceMaxValue", GetAbsoluteToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAbsoluteToleranceMinValue", GetAbsoluteToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getAbsoluteToleranceMinValue", GetAbsoluteToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetConvertLinesToPoints", GetConvertLinesToPoints);
	Nan::SetPrototypeMethod(tpl, "getConvertLinesToPoints", GetConvertLinesToPoints);

	Nan::SetPrototypeMethod(tpl, "GetConvertPolysToLines", GetConvertPolysToLines);
	Nan::SetPrototypeMethod(tpl, "getConvertPolysToLines", GetConvertPolysToLines);

	Nan::SetPrototypeMethod(tpl, "GetConvertStripsToPolys", GetConvertStripsToPolys);
	Nan::SetPrototypeMethod(tpl, "getConvertStripsToPolys", GetConvertStripsToPolys);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetPieceInvariant", GetPieceInvariant);
	Nan::SetPrototypeMethod(tpl, "getPieceInvariant", GetPieceInvariant);

	Nan::SetPrototypeMethod(tpl, "GetPointMerging", GetPointMerging);
	Nan::SetPrototypeMethod(tpl, "getPointMerging", GetPointMerging);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceIsAbsolute", GetToleranceIsAbsolute);
	Nan::SetPrototypeMethod(tpl, "getToleranceIsAbsolute", GetToleranceIsAbsolute);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PieceInvariantOff", PieceInvariantOff);
	Nan::SetPrototypeMethod(tpl, "pieceInvariantOff", PieceInvariantOff);

	Nan::SetPrototypeMethod(tpl, "PieceInvariantOn", PieceInvariantOn);
	Nan::SetPrototypeMethod(tpl, "pieceInvariantOn", PieceInvariantOn);

	Nan::SetPrototypeMethod(tpl, "PointMergingOff", PointMergingOff);
	Nan::SetPrototypeMethod(tpl, "pointMergingOff", PointMergingOff);

	Nan::SetPrototypeMethod(tpl, "PointMergingOn", PointMergingOn);
	Nan::SetPrototypeMethod(tpl, "pointMergingOn", PointMergingOn);

	Nan::SetPrototypeMethod(tpl, "ReleaseLocator", ReleaseLocator);
	Nan::SetPrototypeMethod(tpl, "releaseLocator", ReleaseLocator);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAbsoluteTolerance", SetAbsoluteTolerance);
	Nan::SetPrototypeMethod(tpl, "setAbsoluteTolerance", SetAbsoluteTolerance);

	Nan::SetPrototypeMethod(tpl, "SetConvertLinesToPoints", SetConvertLinesToPoints);
	Nan::SetPrototypeMethod(tpl, "setConvertLinesToPoints", SetConvertLinesToPoints);

	Nan::SetPrototypeMethod(tpl, "SetConvertPolysToLines", SetConvertPolysToLines);
	Nan::SetPrototypeMethod(tpl, "setConvertPolysToLines", SetConvertPolysToLines);

	Nan::SetPrototypeMethod(tpl, "SetConvertStripsToPolys", SetConvertStripsToPolys);
	Nan::SetPrototypeMethod(tpl, "setConvertStripsToPolys", SetConvertStripsToPolys);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetPieceInvariant", SetPieceInvariant);
	Nan::SetPrototypeMethod(tpl, "setPieceInvariant", SetPieceInvariant);

	Nan::SetPrototypeMethod(tpl, "SetPointMerging", SetPointMerging);
	Nan::SetPrototypeMethod(tpl, "setPointMerging", SetPointMerging);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	Nan::SetPrototypeMethod(tpl, "SetToleranceIsAbsolute", SetToleranceIsAbsolute);
	Nan::SetPrototypeMethod(tpl, "setToleranceIsAbsolute", SetToleranceIsAbsolute);

	Nan::SetPrototypeMethod(tpl, "ToleranceIsAbsoluteOff", ToleranceIsAbsoluteOff);
	Nan::SetPrototypeMethod(tpl, "toleranceIsAbsoluteOff", ToleranceIsAbsoluteOff);

	Nan::SetPrototypeMethod(tpl, "ToleranceIsAbsoluteOn", ToleranceIsAbsoluteOn);
	Nan::SetPrototypeMethod(tpl, "toleranceIsAbsoluteOn", ToleranceIsAbsoluteOn);

	ptpl.Reset( tpl );
}

void VtkCleanPolyDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCleanPolyData> native = vtkSmartPointer<vtkCleanPolyData>::New();
		VtkCleanPolyDataWrap* obj = new VtkCleanPolyDataWrap(native);
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

void VtkCleanPolyDataWrap::ConvertLinesToPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConvertLinesToPointsOff();
}

void VtkCleanPolyDataWrap::ConvertLinesToPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConvertLinesToPointsOn();
}

void VtkCleanPolyDataWrap::ConvertPolysToLinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConvertPolysToLinesOff();
}

void VtkCleanPolyDataWrap::ConvertPolysToLinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConvertPolysToLinesOn();
}

void VtkCleanPolyDataWrap::ConvertStripsToPolysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConvertStripsToPolysOff();
}

void VtkCleanPolyDataWrap::ConvertStripsToPolysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConvertStripsToPolysOn();
}

void VtkCleanPolyDataWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CreateDefaultLocator(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCleanPolyDataWrap::GetAbsoluteTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAbsoluteTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::GetAbsoluteToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAbsoluteToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::GetAbsoluteToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAbsoluteToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCleanPolyDataWrap::GetConvertLinesToPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetConvertLinesToPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::GetConvertPolysToLines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetConvertPolysToLines();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::GetConvertStripsToPolys(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetConvertStripsToPolys();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	vtkIncrementalPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
		VtkIncrementalPointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIncrementalPointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalPointLocatorWrap *w = new VtkIncrementalPointLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCleanPolyDataWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::GetPieceInvariant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPieceInvariant();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::GetPointMerging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointMerging();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::GetToleranceIsAbsolute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceIsAbsolute();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCleanPolyDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
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

void VtkCleanPolyDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	vtkCleanPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCleanPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCleanPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCleanPolyDataWrap *w = new VtkCleanPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCleanPolyDataWrap::PieceInvariantOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PieceInvariantOff();
}

void VtkCleanPolyDataWrap::PieceInvariantOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PieceInvariantOn();
}

void VtkCleanPolyDataWrap::PointMergingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PointMergingOff();
}

void VtkCleanPolyDataWrap::PointMergingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PointMergingOn();
}

void VtkCleanPolyDataWrap::ReleaseLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReleaseLocator();
}

void VtkCleanPolyDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCleanPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCleanPolyDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCleanPolyDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCleanPolyDataWrap *w = new VtkCleanPolyDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCleanPolyDataWrap::SetAbsoluteTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAbsoluteTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCleanPolyDataWrap::SetConvertLinesToPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetConvertLinesToPoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCleanPolyDataWrap::SetConvertPolysToLines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetConvertPolysToLines(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCleanPolyDataWrap::SetConvertStripsToPolys(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetConvertStripsToPolys(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCleanPolyDataWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIncrementalPointLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIncrementalPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocator(
			(vtkIncrementalPointLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCleanPolyDataWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCleanPolyDataWrap::SetPieceInvariant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPieceInvariant(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCleanPolyDataWrap::SetPointMerging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointMerging(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCleanPolyDataWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCleanPolyDataWrap::SetToleranceIsAbsolute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetToleranceIsAbsolute(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCleanPolyDataWrap::ToleranceIsAbsoluteOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ToleranceIsAbsoluteOff();
}

void VtkCleanPolyDataWrap::ToleranceIsAbsoluteOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCleanPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkCleanPolyDataWrap>(info.Holder());
	vtkCleanPolyData *native = (vtkCleanPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ToleranceIsAbsoluteOn();
}

