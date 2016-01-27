/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkQuadricClusteringWrap.h"
#include "vtkObjectWrap.h"
#include "vtkFeatureEdgesWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkQuadricClusteringWrap::ptpl;

VtkQuadricClusteringWrap::VtkQuadricClusteringWrap()
{ }

VtkQuadricClusteringWrap::VtkQuadricClusteringWrap(vtkSmartPointer<vtkQuadricClustering> _native)
{ native = _native; }

VtkQuadricClusteringWrap::~VtkQuadricClusteringWrap()
{ }

void VtkQuadricClusteringWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkQuadricClustering").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("QuadricClustering").ToLocalChecked(), ConstructorGetter);
}

void VtkQuadricClusteringWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkQuadricClusteringWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkQuadricClusteringWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Append", Append);
	Nan::SetPrototypeMethod(tpl, "append", Append);

	Nan::SetPrototypeMethod(tpl, "AutoAdjustNumberOfDivisionsOff", AutoAdjustNumberOfDivisionsOff);
	Nan::SetPrototypeMethod(tpl, "autoAdjustNumberOfDivisionsOff", AutoAdjustNumberOfDivisionsOff);

	Nan::SetPrototypeMethod(tpl, "AutoAdjustNumberOfDivisionsOn", AutoAdjustNumberOfDivisionsOn);
	Nan::SetPrototypeMethod(tpl, "autoAdjustNumberOfDivisionsOn", AutoAdjustNumberOfDivisionsOn);

	Nan::SetPrototypeMethod(tpl, "CopyCellDataOff", CopyCellDataOff);
	Nan::SetPrototypeMethod(tpl, "copyCellDataOff", CopyCellDataOff);

	Nan::SetPrototypeMethod(tpl, "CopyCellDataOn", CopyCellDataOn);
	Nan::SetPrototypeMethod(tpl, "copyCellDataOn", CopyCellDataOn);

	Nan::SetPrototypeMethod(tpl, "EndAppend", EndAppend);
	Nan::SetPrototypeMethod(tpl, "endAppend", EndAppend);

	Nan::SetPrototypeMethod(tpl, "GetAutoAdjustNumberOfDivisions", GetAutoAdjustNumberOfDivisions);
	Nan::SetPrototypeMethod(tpl, "getAutoAdjustNumberOfDivisions", GetAutoAdjustNumberOfDivisions);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCopyCellData", GetCopyCellData);
	Nan::SetPrototypeMethod(tpl, "getCopyCellData", GetCopyCellData);

	Nan::SetPrototypeMethod(tpl, "GetFeatureEdges", GetFeatureEdges);
	Nan::SetPrototypeMethod(tpl, "getFeatureEdges", GetFeatureEdges);

	Nan::SetPrototypeMethod(tpl, "GetFeaturePointsAngle", GetFeaturePointsAngle);
	Nan::SetPrototypeMethod(tpl, "getFeaturePointsAngle", GetFeaturePointsAngle);

	Nan::SetPrototypeMethod(tpl, "GetFeaturePointsAngleMaxValue", GetFeaturePointsAngleMaxValue);
	Nan::SetPrototypeMethod(tpl, "getFeaturePointsAngleMaxValue", GetFeaturePointsAngleMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetFeaturePointsAngleMinValue", GetFeaturePointsAngleMinValue);
	Nan::SetPrototypeMethod(tpl, "getFeaturePointsAngleMinValue", GetFeaturePointsAngleMinValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfXDivisions", GetNumberOfXDivisions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfXDivisions", GetNumberOfXDivisions);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfYDivisions", GetNumberOfYDivisions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfYDivisions", GetNumberOfYDivisions);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfZDivisions", GetNumberOfZDivisions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfZDivisions", GetNumberOfZDivisions);

	Nan::SetPrototypeMethod(tpl, "GetPreventDuplicateCells", GetPreventDuplicateCells);
	Nan::SetPrototypeMethod(tpl, "getPreventDuplicateCells", GetPreventDuplicateCells);

	Nan::SetPrototypeMethod(tpl, "GetUseFeatureEdges", GetUseFeatureEdges);
	Nan::SetPrototypeMethod(tpl, "getUseFeatureEdges", GetUseFeatureEdges);

	Nan::SetPrototypeMethod(tpl, "GetUseFeaturePoints", GetUseFeaturePoints);
	Nan::SetPrototypeMethod(tpl, "getUseFeaturePoints", GetUseFeaturePoints);

	Nan::SetPrototypeMethod(tpl, "GetUseInputPoints", GetUseInputPoints);
	Nan::SetPrototypeMethod(tpl, "getUseInputPoints", GetUseInputPoints);

	Nan::SetPrototypeMethod(tpl, "GetUseInternalTriangles", GetUseInternalTriangles);
	Nan::SetPrototypeMethod(tpl, "getUseInternalTriangles", GetUseInternalTriangles);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PreventDuplicateCellsOff", PreventDuplicateCellsOff);
	Nan::SetPrototypeMethod(tpl, "preventDuplicateCellsOff", PreventDuplicateCellsOff);

	Nan::SetPrototypeMethod(tpl, "PreventDuplicateCellsOn", PreventDuplicateCellsOn);
	Nan::SetPrototypeMethod(tpl, "preventDuplicateCellsOn", PreventDuplicateCellsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAutoAdjustNumberOfDivisions", SetAutoAdjustNumberOfDivisions);
	Nan::SetPrototypeMethod(tpl, "setAutoAdjustNumberOfDivisions", SetAutoAdjustNumberOfDivisions);

	Nan::SetPrototypeMethod(tpl, "SetCopyCellData", SetCopyCellData);
	Nan::SetPrototypeMethod(tpl, "setCopyCellData", SetCopyCellData);

	Nan::SetPrototypeMethod(tpl, "SetDivisionOrigin", SetDivisionOrigin);
	Nan::SetPrototypeMethod(tpl, "setDivisionOrigin", SetDivisionOrigin);

	Nan::SetPrototypeMethod(tpl, "SetDivisionSpacing", SetDivisionSpacing);
	Nan::SetPrototypeMethod(tpl, "setDivisionSpacing", SetDivisionSpacing);

	Nan::SetPrototypeMethod(tpl, "SetFeaturePointsAngle", SetFeaturePointsAngle);
	Nan::SetPrototypeMethod(tpl, "setFeaturePointsAngle", SetFeaturePointsAngle);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfDivisions", SetNumberOfDivisions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfDivisions", SetNumberOfDivisions);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfXDivisions", SetNumberOfXDivisions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfXDivisions", SetNumberOfXDivisions);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfYDivisions", SetNumberOfYDivisions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfYDivisions", SetNumberOfYDivisions);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfZDivisions", SetNumberOfZDivisions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfZDivisions", SetNumberOfZDivisions);

	Nan::SetPrototypeMethod(tpl, "SetPreventDuplicateCells", SetPreventDuplicateCells);
	Nan::SetPrototypeMethod(tpl, "setPreventDuplicateCells", SetPreventDuplicateCells);

	Nan::SetPrototypeMethod(tpl, "SetUseFeatureEdges", SetUseFeatureEdges);
	Nan::SetPrototypeMethod(tpl, "setUseFeatureEdges", SetUseFeatureEdges);

	Nan::SetPrototypeMethod(tpl, "SetUseFeaturePoints", SetUseFeaturePoints);
	Nan::SetPrototypeMethod(tpl, "setUseFeaturePoints", SetUseFeaturePoints);

	Nan::SetPrototypeMethod(tpl, "SetUseInputPoints", SetUseInputPoints);
	Nan::SetPrototypeMethod(tpl, "setUseInputPoints", SetUseInputPoints);

	Nan::SetPrototypeMethod(tpl, "SetUseInternalTriangles", SetUseInternalTriangles);
	Nan::SetPrototypeMethod(tpl, "setUseInternalTriangles", SetUseInternalTriangles);

	Nan::SetPrototypeMethod(tpl, "StartAppend", StartAppend);
	Nan::SetPrototypeMethod(tpl, "startAppend", StartAppend);

	Nan::SetPrototypeMethod(tpl, "UseFeatureEdgesOff", UseFeatureEdgesOff);
	Nan::SetPrototypeMethod(tpl, "useFeatureEdgesOff", UseFeatureEdgesOff);

	Nan::SetPrototypeMethod(tpl, "UseFeatureEdgesOn", UseFeatureEdgesOn);
	Nan::SetPrototypeMethod(tpl, "useFeatureEdgesOn", UseFeatureEdgesOn);

	Nan::SetPrototypeMethod(tpl, "UseFeaturePointsOff", UseFeaturePointsOff);
	Nan::SetPrototypeMethod(tpl, "useFeaturePointsOff", UseFeaturePointsOff);

	Nan::SetPrototypeMethod(tpl, "UseFeaturePointsOn", UseFeaturePointsOn);
	Nan::SetPrototypeMethod(tpl, "useFeaturePointsOn", UseFeaturePointsOn);

	Nan::SetPrototypeMethod(tpl, "UseInputPointsOff", UseInputPointsOff);
	Nan::SetPrototypeMethod(tpl, "useInputPointsOff", UseInputPointsOff);

	Nan::SetPrototypeMethod(tpl, "UseInputPointsOn", UseInputPointsOn);
	Nan::SetPrototypeMethod(tpl, "useInputPointsOn", UseInputPointsOn);

	Nan::SetPrototypeMethod(tpl, "UseInternalTrianglesOff", UseInternalTrianglesOff);
	Nan::SetPrototypeMethod(tpl, "useInternalTrianglesOff", UseInternalTrianglesOff);

	Nan::SetPrototypeMethod(tpl, "UseInternalTrianglesOn", UseInternalTrianglesOn);
	Nan::SetPrototypeMethod(tpl, "useInternalTrianglesOn", UseInternalTrianglesOn);

	ptpl.Reset( tpl );
}

void VtkQuadricClusteringWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkQuadricClustering> native = vtkSmartPointer<vtkQuadricClustering>::New();
		VtkQuadricClusteringWrap* obj = new VtkQuadricClusteringWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkQuadricClusteringWrap::Append(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Append(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::AutoAdjustNumberOfDivisionsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoAdjustNumberOfDivisionsOff();
}

void VtkQuadricClusteringWrap::AutoAdjustNumberOfDivisionsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoAdjustNumberOfDivisionsOn();
}

void VtkQuadricClusteringWrap::CopyCellDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyCellDataOff();
}

void VtkQuadricClusteringWrap::CopyCellDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyCellDataOn();
}

void VtkQuadricClusteringWrap::EndAppend(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndAppend();
}

void VtkQuadricClusteringWrap::GetAutoAdjustNumberOfDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutoAdjustNumberOfDivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkQuadricClusteringWrap::GetCopyCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCopyCellData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::GetFeatureEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	vtkFeatureEdges * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFeatureEdges();
		VtkFeatureEdgesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFeatureEdgesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFeatureEdgesWrap *w = new VtkFeatureEdgesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuadricClusteringWrap::GetFeaturePointsAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFeaturePointsAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::GetFeaturePointsAngleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFeaturePointsAngleMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::GetFeaturePointsAngleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFeaturePointsAngleMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::GetNumberOfXDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfXDivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::GetNumberOfYDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfYDivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::GetNumberOfZDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfZDivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::GetPreventDuplicateCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreventDuplicateCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::GetUseFeatureEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseFeatureEdges();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::GetUseFeaturePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseFeaturePoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::GetUseInputPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseInputPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::GetUseInternalTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseInternalTriangles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricClusteringWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
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

void VtkQuadricClusteringWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	vtkQuadricClustering * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkQuadricClusteringWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkQuadricClusteringWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkQuadricClusteringWrap *w = new VtkQuadricClusteringWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuadricClusteringWrap::PreventDuplicateCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreventDuplicateCellsOff();
}

void VtkQuadricClusteringWrap::PreventDuplicateCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreventDuplicateCellsOn();
}

void VtkQuadricClusteringWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkQuadricClustering * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkQuadricClusteringWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkQuadricClusteringWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkQuadricClusteringWrap *w = new VtkQuadricClusteringWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetAutoAdjustNumberOfDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutoAdjustNumberOfDivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetCopyCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCopyCellData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetDivisionOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetDivisionOrigin(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetDivisionSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetDivisionSpacing(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetFeaturePointsAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFeaturePointsAngle(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetNumberOfDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
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
				native->SetNumberOfDivisions(
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

void VtkQuadricClusteringWrap::SetNumberOfXDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfXDivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetNumberOfYDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfYDivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetNumberOfZDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfZDivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetPreventDuplicateCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPreventDuplicateCells(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetUseFeatureEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseFeatureEdges(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetUseFeaturePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseFeaturePoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetUseInputPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseInputPoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::SetUseInternalTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseInternalTriangles(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::StartAppend(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->StartAppend(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricClusteringWrap::UseFeatureEdgesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseFeatureEdgesOff();
}

void VtkQuadricClusteringWrap::UseFeatureEdgesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseFeatureEdgesOn();
}

void VtkQuadricClusteringWrap::UseFeaturePointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseFeaturePointsOff();
}

void VtkQuadricClusteringWrap::UseFeaturePointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseFeaturePointsOn();
}

void VtkQuadricClusteringWrap::UseInputPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseInputPointsOff();
}

void VtkQuadricClusteringWrap::UseInputPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseInputPointsOn();
}

void VtkQuadricClusteringWrap::UseInternalTrianglesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseInternalTrianglesOff();
}

void VtkQuadricClusteringWrap::UseInternalTrianglesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricClusteringWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info.Holder());
	vtkQuadricClustering *native = (vtkQuadricClustering *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseInternalTrianglesOn();
}

