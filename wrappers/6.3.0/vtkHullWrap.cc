/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkHullWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPlanesWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHullWrap::ptpl;

VtkHullWrap::VtkHullWrap()
{ }

VtkHullWrap::VtkHullWrap(vtkSmartPointer<vtkHull> _native)
{ native = _native; }

VtkHullWrap::~VtkHullWrap()
{ }

void VtkHullWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHull").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Hull").ToLocalChecked(), ConstructorGetter);
}

void VtkHullWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHullWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHullWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddCubeEdgePlanes", AddCubeEdgePlanes);
	Nan::SetPrototypeMethod(tpl, "addCubeEdgePlanes", AddCubeEdgePlanes);

	Nan::SetPrototypeMethod(tpl, "AddCubeFacePlanes", AddCubeFacePlanes);
	Nan::SetPrototypeMethod(tpl, "addCubeFacePlanes", AddCubeFacePlanes);

	Nan::SetPrototypeMethod(tpl, "AddCubeVertexPlanes", AddCubeVertexPlanes);
	Nan::SetPrototypeMethod(tpl, "addCubeVertexPlanes", AddCubeVertexPlanes);

	Nan::SetPrototypeMethod(tpl, "AddPlane", AddPlane);
	Nan::SetPrototypeMethod(tpl, "addPlane", AddPlane);

	Nan::SetPrototypeMethod(tpl, "AddRecursiveSpherePlanes", AddRecursiveSpherePlanes);
	Nan::SetPrototypeMethod(tpl, "addRecursiveSpherePlanes", AddRecursiveSpherePlanes);

	Nan::SetPrototypeMethod(tpl, "GenerateHull", GenerateHull);
	Nan::SetPrototypeMethod(tpl, "generateHull", GenerateHull);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPlanes", GetNumberOfPlanes);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPlanes", GetNumberOfPlanes);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllPlanes", RemoveAllPlanes);
	Nan::SetPrototypeMethod(tpl, "removeAllPlanes", RemoveAllPlanes);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPlane", SetPlane);
	Nan::SetPrototypeMethod(tpl, "setPlane", SetPlane);

	Nan::SetPrototypeMethod(tpl, "SetPlanes", SetPlanes);
	Nan::SetPrototypeMethod(tpl, "setPlanes", SetPlanes);

	ptpl.Reset( tpl );
}

void VtkHullWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHull> native = vtkSmartPointer<vtkHull>::New();
		VtkHullWrap* obj = new VtkHullWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHullWrap::AddCubeEdgePlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AddCubeEdgePlanes();
}

void VtkHullWrap::AddCubeFacePlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AddCubeFacePlanes();
}

void VtkHullWrap::AddCubeVertexPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AddCubeVertexPlanes();
}

void VtkHullWrap::AddPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->AddPlane(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->AddPlane(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHullWrap::AddRecursiveSpherePlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddRecursiveSpherePlanes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHullWrap::GenerateHull(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
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
							if(info.Length() > 6 && info[6]->IsNumber())
							{
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->GenerateHull(
									(vtkPolyData *) a0->native.GetPointer(),
									info[1]->NumberValue(),
									info[2]->NumberValue(),
									info[3]->NumberValue(),
									info[4]->NumberValue(),
									info[5]->NumberValue(),
									info[6]->NumberValue()
								);
								return;
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHullWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHullWrap::GetNumberOfPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPlanes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHullWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
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

void VtkHullWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	vtkHull * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHullWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHullWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHullWrap *w = new VtkHullWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHullWrap::RemoveAllPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllPlanes();
}

void VtkHullWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHull * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHullWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHullWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHullWrap *w = new VtkHullWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHullWrap::SetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						native->SetPlane(
							info[0]->Int32Value(),
							info[1]->NumberValue(),
							info[2]->NumberValue(),
							info[3]->NumberValue(),
							info[4]->NumberValue()
						);
						return;
					}
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetPlane(
						info[0]->Int32Value(),
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

void VtkHullWrap::SetPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHullWrap *wrapper = ObjectWrap::Unwrap<VtkHullWrap>(info.Holder());
	vtkHull *native = (vtkHull *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlanesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlanesWrap *a0 = ObjectWrap::Unwrap<VtkPlanesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlanes(
			(vtkPlanes *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

